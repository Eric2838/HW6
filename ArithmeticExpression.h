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
 using namespace std;
  
 class ArithmeticExpression : public Expression{
	protected:
		Expression *left;
		Expression *right;
		float numLeft;
		float numRight;
		bool isLeaf;
	public:
		virtual string evaluate();
		
		float convert(string s);
		
		virtual void print();
		
		ArithmeticExpression constructArith(string s);
 };