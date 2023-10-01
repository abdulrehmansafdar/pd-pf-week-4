#include <iostream>
using namespace std;
void discount( string day , int totalpurchase , int final ) ;
int main ( ) 
{
	string day ;
	int totalpurchase ;
	int final ;
	cout << "Enter the day of purchase: " ;
	cin >> day ;
	cout << "Enter the total purchase amount: $" ;
	cin >> totalpurchase ;
	discount( day , totalpurchase , final ) ;
}
	void discount( string day , int totalpurchase , int final )
	{ 
	int d;
	 if ( day == "Sunday"  ) {
	d =  totalpurchase * (0.1) ;
	final= totalpurchase - d ;
	cout << "Payable Amount: $" << final ; }
	 if ( day != "Sunday" ){
	cout << "Payable Amount: $" << totalpurchase ; }
}
	