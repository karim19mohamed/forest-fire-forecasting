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
	protected:
		float temp_average;
		float temp_accumlation;
		
	private:
		vector<float> temp_readings;
		bool average_updated;
		bool accumlation_updated;
		bool test_flag;
		void readTemperature();
		void calculateAccumlation();
		void calculateAverage();
		void RunningSystem();
		
	public:
		void InitializeSystem(bool test_flag);
		virtual void client() = 0;
};

#endif /* FIREFORCASTINGCLIENTBASE_H_ */
