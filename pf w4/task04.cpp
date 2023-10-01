#include <iostream>
using namespace std;
void add( int num1 , int num2 ) ;
void sub( int num1 , int num2 ) ;
void mul( int num1 , int num2 ) ;
void division( int num1 , int num2 ) ;
int main ( ) 
{
	int num1 ;
	int num2 ;
	char op ;
	cout << "Enter 1st number: " ;
	cin >> num1 ;
	cout << "Enter 2nd number: " ;
	cin >> num2 ;
	cout << "Enter an operator (+, -, *, /): " ;
	cin >> op ;
	if ( op == '+' )
	{ add( num1 , num2 ) ; }
	if ( op == '-' )
	{ sub( num1 , num2 ) ; }
	if ( op == '*' )
	{ mul( num1 , num2 ) ; }
	if ( op == '/' )
	{ division( num1 , num2 ) ; }
	}
	void add( int num1 , int num2 ) 
	{ int add ;
	add = num1 + num2 ; 
	cout << "Addition: " << add ; }
	void sub( int num1 , int num2 ) 
	{ int sub ;
	sub = num1 - num2 ;  
	cout << "Subtraction: " << sub ; }
	void mul( int num1 , int num2 ) 
	{ int mul ;
	mul = num1 * num2 ;
	cout << "Multiplication: " << mul ; }
	void division( int num1 , int num2 ) 
	{ int division ;
	division = num1 / num2 ;
	cout << "Division: " << division ; }
	 


	
	
	