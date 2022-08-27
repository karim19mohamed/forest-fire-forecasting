/*
 * FireForcastingClientTerminalOutput.h
 *
 *  Created on: Aug 27, 2022
 *      Author: karim
 */

#ifndef FIREFORCASTINGCLIENTTERMINALOUTPUT_H_
#define FIREFORCASTINGCLIENTTERMINALOUTPUT_H_

#include <iostream>
#include "FireForcastingClientBase.h"

using namespace std;
typedef long long ll;

class FireForcastingClientTerminalOutput : public FireForcastingClientBase {
	public:
		/*
		 * The constuctor just call the InitializeSystem function
		 * from FireForcastingClientBase class to run the system
		 */	
		FireForcastingClientTerminalOutput(bool test_flag);

		/*
		 * The client function will be responsible for:
		 * print the Accumlation and Average to the terminal
		 */	
		void client();
};

#endif /* FIREFORCASTINGCLIENTTERMINALOUTPUT_H_ */
