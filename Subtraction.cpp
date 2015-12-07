/*
 * Name: Ian Prins, Jie Luo, Eric Chaput, Jiamin Luo
 * MacID: prinsij, louj3, chaputem, luoj1
 * Student Number: 001419316, 
 * Description: This file implements the class Subtract, representing a subtraction 
 * 				arithmatic expression
 */
 
 #include <iostream>
 #include <string>
 #include <stdio.h>
 #
 #include "Subtraction.h"
 using namespace std;
 
 string Subtract::evaluate(){
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
	 return to_string(fleft - fright);
 }
 
 void Subtract::print(){
	 cout << '(';
	if (this.numLeft == null){
		(*left).print();
	} else {
		cout << numLeft
	}
	if (this.numRight == null){
		cout << '-';
	} else {
		(*right).print();
	}
	 cout << ')';
 }
