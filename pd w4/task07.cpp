#include<iostream>
#include<windows.h>
using namespace std ;
void flowerShop(int redRose, int whiteRose, int tulip) ;
int main( ) {
	int redRose ;
	int whiteRose ;
	int tulip ;
	cout << "Red Rose: " ;
	cin >> redRose ;
	cout << "White Rose: " ;
	cin >> whiteRose ;
	cout << "Tulips: " ;
	cin >> tulip ;
	flowerShop(redRose , whiteRose , tulip) ;
}
	void flowerShop(int redRose, int whiteRose, int tulip)
{	float original ;
	float discount ;
	float priceafterd ;
	original = redRose*2 + whiteRose*4.1 + tulip*2.5 ;
	discount = 0.2 * original ;
	priceafterd = original - discount ;
	if ( original > 200 )
	{ cout << "Original Price: $" << original << endl ;
	cout << "Price after Discount: $" << priceafterd ; }
	if ( original < 200 )
	{ cout << "No discount applied." ; }
}
