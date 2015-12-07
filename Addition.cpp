/*
 * Name: Ian Prins, Jie Luo, Eric Chaput, Jiamin Luo
 * MacID: prinsij, louj3, chaputem, luoj1
 * Student Number: 001419316, 
 * Description: This file implements the class Add, representing an addition 
 * 				arithmatic expression
 */
 
 #include <iostream>
 #include <string>
 #include <stdio.h>
 #include "Addition.h"
 using namespace std;
 
 string Add::evaluate(){
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
	 return to_string(fleft + fright);
 }

void Add::print(){
	cout << '(';
	if (this.numLeft == null){
		(*left).print();
	} else {
		cout << numLeft;
	}
	if (this.numRight == null){
		cout << '+';
	} else {
		(*right).print();
	}
	cout << ')';
}