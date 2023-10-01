#include<iostream>
#include<windows.h>
using namespace std;
void reverse( string x ) ;
int main( ) {
	string x ;
	cout << "Enter 'true' or 'false' : " ;
	cin >> x ;
	reverse( x ) ;
}
	void reverse( string x )
{	if ( x == "true" )
	{ cout << "false" ; }
	else 
	{ cout << "true" ; }
}
