/*
 *	xtraCredMain.cpp
 *  Created on: Mar 10, 2019
 *  Author: Emily Evans
 */

#include <iostream>
#include <stdlib.h>
#include <string>

#include "xtracred.hpp"

using namespace std;


int main(){
	char a[] = {'f','l','a','b','b','e','r','g','a','s','t','e','d'};
	int l = 13;

	MyChar word(a,l);
	word.printArray(a,l);
	return 0;
}
