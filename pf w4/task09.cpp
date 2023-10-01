#include <iostream>
using namespace std;
void calculateFuel( float distance ) ;
int main ( ) 
{
	float distance ;
	cout << "Enter the distance: " ;
	cin >> distance ;
	calculateFuel( distance ) ;
}
	void calculateFuel( float distance ) 
	{ float fuelneeded ;
	if ( fuelneeded >= 100 )
	{ fuelneeded = distance * 10 ;
	cout << "Fuel needed: " << fuelneeded << endl ; }
	if ( fuelneeded < 100 )
	{ cout << "Fuel needed: 100" ; }
	}