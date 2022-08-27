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

		/*
		 * The readTemperature function will be responsible for:
		 * 1- read the data from the sensor or from the unit test or from sensor simulation
		 * 2- it reads and store every 5 readings
		 */
		void readTemperature();

		/*
		 * The calculateAccumlation function will be responsible for:
		 * 1- calculate Accumlation of the temperature every 5 seconds
		 */
		void calculateAccumlation();

		/*
		 * The calculateAverage function will be responsible for:
		 * 1- calculate Average of the temperature every 5 seconds
		 */
		void calculateAverage();

		/*
		 * The RunningSystem function will be responsible for:
		 * 1- run forever as long as the code runs to make the code automatic
		 * 2- call the readTemperature function
		 * 3- call the client function
		 */	
		void RunningSystem();
		
	public:
		/*
		 * This function will be responsible for:
		 * 1- reset all the parameters
		 * 2- call the client function to be automated
		 */
		void InitializeSystem(bool test_flag);

		/*
		 * This function is virtual in order to make it more flexible
		 * so that the results can be observed through any method
		 */
		virtual void client() = 0;
};

#endif /* FIREFORCASTINGCLIENTBASE_H_ */
