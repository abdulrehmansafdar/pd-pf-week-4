#include <iostream>
using namespace std;
void discount( string day , float totalpurchase ) ;
int main ( ) 
{
	while( true )
{	string day ;
	float totalpurchase ;
	cout << "Enter the day of purchase: " ;
	cin >> day ;
	cout << "Enter the total purchase: " ;
	cin >> totalpurchase ;
	discount( day , totalpurchase ) ;
	}
}
	void discount( string day , float totalpurchase )
	{ float payable ;
	if ( day == "sunday" )
	 payable = totalpurchase - ( 0.1 * totalpurchase ) ;
	cout << "Payable amount is: " << payable << endl ;
	if ( day != "sunday" )
	payable = totalpurchase - ( 0.05 * totalpurchase ) ;
	cout << "Payable amount is: " << payable << endl ; }  
	