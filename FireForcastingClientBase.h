/*
 * FireForcastingClientBase.h
 *
 *  Created on: Aug 26, 2022
 *      Author: karim
 */

#ifndef FIREFORCASTINGCLIENTBASE_H_
#define FIREFORCASTINGCLIENTBASE_H_
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class FireForcastingClientBase {
	private:
		vector<float> temp_readings;
		float temp_average;
		float temp_accumlation;
		bool test_flag;
		void readTemperature();
		void calculateAccumlation();
		void calculateAverage();
	public:
		FireForcastingClientBase(bool test_flag);
		void client();
};

#endif /* FIREFORCASTINGCLIENTBASE_H_ */
