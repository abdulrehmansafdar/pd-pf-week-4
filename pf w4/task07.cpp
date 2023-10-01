#include <iostream>
using namespace std;
void evenorodd( int num ) ;
int main ( ) 
{	int num ;
	cout << "Enter a number: " ;
	cin >> num ;
	evenorodd( num ) ;
}
	void evenorodd( int num )
	{ if ( num % 2 == 0 )
	cout << "Number " << num << " is even" ;
	if ( num % 2 != 0 )
	cout << "Number " << num << " is odd" ; }	
	
	