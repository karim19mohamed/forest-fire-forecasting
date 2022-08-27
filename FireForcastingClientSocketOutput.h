/*
 * FireForcastingClientSocketOutput.h
 *
 *  Created on: Aug 27, 2022
 *      Author: karim
 */

#ifndef FIREFORCASTINGCLIENTSOCKETOUTPUT_H_
#define FIREFORCASTINGCLIENTSOCKETOUTPUT_H_

#include <bits/stdc++.h>
#include "FireForcastingClientBase.h"
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#define PORT 8080

using namespace std;
typedef long long ll;

class FireForcastingClientSocketOutput : public FireForcastingClientBase {
	private:
		// Socket parameters
		int server_fd, new_socket;
    	struct sockaddr_in address;
		int opt;
    	int addrlen;

		// It initializes the socket connection 
		void InitializeSocket();

	public:
		// the constructor runs the InitializeSocket function
		FireForcastingClientSocketOutput(bool test_flag);

		// Close the socket after the connection ends
		~FireForcastingClientSocketOutput();

		// send the average and the accumulation results through the socket 
		void client();
};

#endif /* FIREFORCASTINGCLIENTSOCKETOUTPUT_H_ */
