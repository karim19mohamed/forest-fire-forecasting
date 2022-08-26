/*
 * FireForcastingClientBase.cpp
 *
 *  Created on: Aug 26, 2022
 *      Author: karim
 */

#include "FireForcastingClientBase.h"
#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;
typedef long long ll;

FireForcastingClientBase::FireForcastingClientBase() {
	/*
	 * The constructor will be responsible for:
	 * 1- reset all the parameters
	 * 2- call the client function to be automated
	 */
}

FireForcastingClientBase::~FireForcastingClientBase() {
	/*
	 * The destructor will be responsible for:
	 * 1- unref all the dynamic memeory if it is used
	 */
}

void FireForcastingClientBase::readTemperature() {
	/*
	 * The readTemperature function will be responsible for:
	 * 1- read the data from the sensor or from the unit test or from sensor simulation
	 * 2- it reads and store every 5 readings
	 */
}
void FireForcastingClientBase::calculateAccumlation() {
	/*
	 * The calculateAccumlation function will be responsible for:
	 * 1- calculate Accumlation of the temperature every 5 seconds
	 */
}
void FireForcastingClientBase::calculateAverage() {
	/*
	 * The calculateAverage function will be responsible for:
	 * 1- calculate Average of the temperature every 5 seconds
	 */
}

void FireForcastingClientBase::client() {
	/*
	 * The client function will be responsible for:
	 * 1- run forever as long as the code runs to make the code automatic
	 * 2- call the readTemperature function
	 * 3- call the calculateAccumlation function
	 * 4- call the calculateAverage function
	 * 5- print the Accumlation and Average to the terminal
	 */
}
