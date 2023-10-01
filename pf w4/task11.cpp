#include <iostream>
using namespace std;
void entered( string name ) ;
int main ( ) 
{	while( true )
{	string name ;
	cout << "Enter your name: " ;
	cin >> name ;
	entered( name ) ;
} }
	void entered( string name )
	{ cout << name << endl ; } 	