#include <iostream>
using namespace std ;
void calculateFuel(float distance) ;
int main ( ) 
{	float distance ; 
	cout << "Enter the distance: " ;
	cin >> distance ;
	calculateFuel( distance ) ;
	}
	void calculateFuel( float distance ) 
{	float fuel ;
	fuel = distance * 10 ;
	cout << "Fuel needed: " << fuel ;   }
