/*
 * FireForcastingClientBase.cpp
 *
 *  Created on: Aug 26, 2022
 *      Author: karim
 */

#include "FireForcastingClientBase.h"

using namespace std;
typedef long long ll;

void FireForcastingClientBase::InitializeSystem(bool test_flag) {
	temp_readings = vector<float>(5, 0.0);
	temp_accumlation = 0.0;
	temp_average = 0.0;
	this->test_flag = test_flag;
	average_updated = true;
	accumlation_updated = true;
	thread RunningSystem_thread(&FireForcastingClientBase::RunningSystem, this);
	thread accumlation_thread(&FireForcastingClientBase::calculateAccumlation, this);
	thread average_thread(&FireForcastingClientBase::calculateAverage, this);
	accumlation_thread.join();
	average_thread.join();
	RunningSystem_thread.join();
}

void FireForcastingClientBase::readTemperature() {
	if (test_flag) {
		srand(time(NULL));
		printf("Temperature Values:");
		fflush(stdout);
		for (int i = 0; i < 5; ++i) {
			temp_readings[i] = -20 + static_cast<float>(rand()) * static_cast<float>(40 + 20) / RAND_MAX;
			; // range = [-20,40]
			printf(" %f", temp_readings[i]);
			fflush(stdout);
			sleep(1);
		}
		puts("");
	}else{
		// Implementation of reading from actual sensor
	}
	average_updated = false;
	accumlation_updated = false;
}

void FireForcastingClientBase::calculateAccumlation() {
	while (true) {
		if (!accumlation_updated) {
			float num = 0.0;
			for (auto &temp_reading : temp_readings)
				num += temp_reading;
			temp_accumlation = num;
			accumlation_updated = true;
		}
	}
}

void FireForcastingClientBase::calculateAverage() {
	while (true) {
		if (!average_updated) {
			float num = 0.0;
			for (auto &temp_reading : temp_readings)
				num += temp_reading;
			num /= 5.0;
			temp_average = num;
			average_updated = true;
		}
	}
}

void FireForcastingClientBase::RunningSystem(){
	while (true) {
		readTemperature();
		while (true) {
			if (average_updated && accumlation_updated) {
				client();
				break;
			}
		}
	}
}
