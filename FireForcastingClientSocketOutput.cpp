/*
 * FireForcastingClientSocketOutput.cpp
 *
 *  Created on: Aug 27, 2022
 *      Author: karim
 */

#include "FireForcastingClientSocketOutput.h"

using namespace std;

FireForcastingClientSocketOutput::FireForcastingClientSocketOutput(bool test_flag) {
	int opt = 1;
    int addrlen = sizeof(address);
	InitializeSocket();
	InitializeSystem(test_flag);

}

FireForcastingClientSocketOutput::~FireForcastingClientSocketOutput(){
	// closing the connected socket
    close(new_socket);
  	// closing the listening socket
    shutdown(server_fd, SHUT_RDWR);
}

void FireForcastingClientSocketOutput::InitializeSocket() {

    // Creating socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }
  
    // Forcefully attaching socket to the port 8080
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);
  
    // Forcefully attaching socket to the port 8080
    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0) {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
	if (listen(server_fd, 3) < 0) {
        perror("listen");
        exit(EXIT_FAILURE);
    }
    if ((new_socket = accept(server_fd, (struct sockaddr*)&address, (socklen_t*)&addrlen)) < 0) {
        perror("accept");
        exit(EXIT_FAILURE);
    }
}

void FireForcastingClientSocketOutput::client() {
	string tmp = "Temperute: Accumlation = " + to_string(temp_accumlation) + " , Average = " + to_string(temp_average) + "\n";
    const char* message = tmp.c_str();

    send(new_socket, message, strlen(message), 0);
}