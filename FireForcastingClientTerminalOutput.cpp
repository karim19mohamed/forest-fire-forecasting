/*
 * FireForcastingClientTerminalOutput.cpp
 *
 *  Created on: Aug 27, 2022
 *      Author: karim
 */

#include "FireForcastingClientTerminalOutput.h"

FireForcastingClientTerminalOutput::FireForcastingClientTerminalOutput(bool test_flag) {
	InitializeSystem(test_flag);
}

void FireForcastingClientTerminalOutput::client() {
	/*
	 * The client function will be responsible for:
	 * 1- print the Accumlation and Average to the terminal
	 */	
	printf("Temperute: Accumlation = %f , Average = %f\n", temp_accumlation, temp_average);
}