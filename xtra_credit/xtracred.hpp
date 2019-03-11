/*
 *	xtracred.hpp
 *  Created on: Mar 10, 2019
 *  Author: Emily Evans
 */

#ifndef XTRACRED_HPP_
#define XTRACRED_HPP_
#include <iostream>
#include <stdlib.h>
using namespace std;

class MyChar {  //class MyChar with 11 characters for word going to print out
	char length;
	char arr[13]; // ask if i need to include length because it's an array

public:
	MyChar(char array[], int len);
	void setArray(char array[]);
	void setLength(int len);
	void printArray (char array[], int len);
	~MyChar(); //the destructor
};


#endif /* XTRACRED_HPP_ */
