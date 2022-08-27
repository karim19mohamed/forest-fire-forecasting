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
	printf("Temperute: Accumlation = %f , Average = %f\n", temp_accumlation, temp_average);
}