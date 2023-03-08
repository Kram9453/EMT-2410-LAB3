//============================================================================
// Name        : lab2.cpp
// Author      : Krishna Ramlall
// Version     :
// Copyright   : 
// Description : LAB 3 FOR EMT 2410!
//============================================================================

#include <iostream>
#include <cfloat>
using namespace std;

//Declaring Functions
float FindMax(float *);
float FindMin(float *);
void DisplayResult(char, float, float);

int main() {
	float MyMax, MyMin; //declaring variables
	char userCommand;
	float arr[5];  //declare array size
	cout << "Please enter 5 numbers of your choice: \n"; //prompting user to input 5 numbers
	cin >>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]; //reading the input numbers
	MyMax = FindMax(arr); //Find max
	MyMin = FindMin(arr); //Find min
	cout << "Please Enter '9' to display the Max number or '0' to display the min number: \n"; //User input for max/min
	cin >> userCommand;

	DisplayResult(userCommand, MyMax, MyMin); // In order to display results
}
float FindMax(float arr[]){  //finds max value in the array
	float max = FLT_MIN;  // Makes the initial max store smallest float value possible

	for(int i=0;i<5;i++) // If the value at the index is 'i' is greater then max, then max=arr[i]
		if(arr[i]> max)
		max = arr[i];
	return max;
}

float FindMin(float arr[]){ // Find the min value in the array
	float min = FLT_MAX; //initially the min will store largest float value possible

	for(int i=0;i<5;i++) // If the value at index 'i' is smaller than min, then min=arr[i]
		if(arr[i]< min)
		min = arr[i];
	return min;
}
void DisplayResult(char userCommand, float max, float min){ //will display the max/min value based on user input
	switch(userCommand){
	case '0':
		cout << "The Min value in the array is : " << min<< endl;
		break;
	case '9':
		cout << "The Max value in the array is : " << max<< endl;
		break;
	default:
		cout << "Invalid input, please try again!" <<endl;


	}
}
