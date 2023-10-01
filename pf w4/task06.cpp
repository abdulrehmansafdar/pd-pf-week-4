#include <iostream>
using namespace std;
void result( int num ) ;
int main ( ) 
{
	int num ;
	cout << "Enter your score: " ;
	cin >> num ;
	result( num ) ;
}
	void result( int num )
	{ if ( num > 50 )
	cout << "Pass" ; 
	if ( num <= 50 )
	cout << "Fail" ; }
	