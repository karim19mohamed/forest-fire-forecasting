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
		int server_fd, new_socket;
    	struct sockaddr_in address;
		int opt;
    	int addrlen;
		void InitializeSocket();
	public:
		FireForcastingClientSocketOutput(bool test_flag);
		~FireForcastingClientSocketOutput();
		void client();
};

#endif /* FIREFORCASTINGCLIENTSOCKETOUTPUT_H_ */
