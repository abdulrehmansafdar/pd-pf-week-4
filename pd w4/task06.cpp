#include<iostream>
#include<windows.h>
using namespace std ;
void duration( int hour , int min ) ;
int main( ) {
	int hour ;
	int min ;
	cout << "Enter the number of hours: " ;
	cin >> hour ;
	cout << "Enter the number of minutes: " ;
	cin >> min ;
	duration( hour , min ) ;
}
	void duration( int hour , int min )
{	if ( hour > min )
	{ cout << hour ; }
	if ( min > hour )
	{ cout << min ; }
}
