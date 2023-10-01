#include<iostream>
#include<windows.h>
using namespace std ;
void discount( string name , int price ) ;
int main( ) {
	string name ;
	int price ;
	cout << "Enter the country's name: " ;
	cin >> name ;
	cout << "Enter the ticket price in dollars: $" ;
	cin >> price ;
	discount( name , price ) ;
}
	void discount( string name , int price )
	{ int final ;
	int d ;
	if ( name == "Pakistan" )
	{ d = 0.05 * price ;
	final = price - d ;
	cout << "Final ticket price after discount: $" << final ; }
	if ( name == "Ireland" )
	{ d = 0.1 * price ;
	final = price -d ;
	cout << "Final ticket price after discount: $" << final ; }
	if ( name == "India" )
	{ d = 0.2* price ;
	final = price - d ;
	cout << "Final ticket price after discount: $" << final ; }
	if ( name == "England" )
	{ d = 0.3* price ;
	final = price - d ;
	cout << "Final ticket price after discount: $" << final ; }
	if ( name == "Canada" )
	{ d = 0.45* price ;
	final = price - d ;
	cout << "Final ticket price after discount: $" << final ; }
}
