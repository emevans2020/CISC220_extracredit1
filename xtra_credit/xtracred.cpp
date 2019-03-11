/*
 *	xtracred.cpp
 *
 *  Created on: Mar 10, 2019
 *  Author: Emily Evans
 *	Extra Credit Due March 12, 2019
 *
 *	0-5 points, depending on difficulty (Due 3/12).  Create a class MyChar with a character field. 
 *  Include a destructor that prints out the character.  Now, like I did in class, write a program
 *  with functions, loops, if conditions, etc. each of which creates MyChar objects such that when
 *  the objects go out of scope a word is spelled. There should be at least 1 function call, one
 *  loop, and one if condition.
 */

#include <iostream>
#include <stdlib.h>
#include "xtracred.hpp"
using namespace std;

// function definitions
MyChar::MyChar(char array[], int len){
	length = len;
	for (char i = 0; i < length; i++){
		arr[i] = array[i];
	}
}

void MyChar::setArray(char array[]){
	for (int i = 0; i < length; i++){
		arr[i] = array[i];
	}
}
void MyChar::setLength(int len){
	length = len;
}

void MyChar::printArray (char array[], int len){
	length = len;
	for (int i = 0; i < length; i++){
		cout << arr[i] << ", ";
	}
	cout << endl;
}

MyChar::~MyChar(){
	for (int i = 0; i < length; i++){
		cout << "Destroying char: " << arr[i] << endl;
	}
}
