/***************************************************
	DO NOT MODIFY THIS FILE
	Data Structure & Algorithm Assignment 3
	InputReader.h
	Purpose: Helper file for reading input

	@author Kien Huynh
	@version 1.0 05-10-2016
***************************************************/
#ifndef INPUTREADER_H
#define INPUTREADER_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void ReadArrayInput(string filename, int*& arr, int& count) {
	ifstream myfile(filename);
	string line;
	count = 0;
	arr = NULL;
	cout << "Reading array: \n";
	if (myfile.is_open()) {
		//The first number should indicate how many numbers will appear in the second line
		myfile >> count;

		//The rest are elements of the array
		arr = new int[count];

		//Read them one by one
		for (int i = 0; i < count; i++) {
			myfile >> arr[i];
		}
	}
}

#endif