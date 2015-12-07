/*
 * Multiplication.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: Eric
 */

#include "Multiplication.h"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

//Multiply two expression
string Multiplication::evaluate(){
	 float fleft, fright;
	 if (this.numLeft == null){
		 fleft = stof(*(this.left).evaluate();
	 } else {
		 fright = this.numLeft;
	 }
	if (this.numRight == null){
		 fright = stof(*(this.right).evaluate();
	 } else {
		 fright = this.numRight;
	 return to_string(fleft * fright);
 }

void Multiplication::print(){
		cout << '(';
		if (this.numLeft == null){
			(*left).print();
		} else {
			cout << numLeft
		}
		if (this.numRight == null){
			cout << '*';
		} else {
			(*right).print();
		}
		cout << ')';
	}
