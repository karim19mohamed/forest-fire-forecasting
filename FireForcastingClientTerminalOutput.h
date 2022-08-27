/*
 * FireForcastingClientTerminalOutput.h
 *
 *  Created on: Aug 27, 2022
 *      Author: karim
 */

#ifndef FIREFORCASTINGCLIENTTERMINALOUTPUT_H_
#define FIREFORCASTINGCLIENTTERMINALOUTPUT_H_

#include <bits/stdc++.h>
#include "FireForcastingClientBase.h"

using namespace std;
typedef long long ll;

class FireForcastingClientTerminalOutput : public FireForcastingClientBase {
	public:
		FireForcastingClientTerminalOutput(bool test_flag);
		void client();
};

#endif /* FIREFORCASTINGCLIENTTERMINALOUTPUT_H_ */
