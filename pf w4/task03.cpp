#include <iostream>
using namespace std ;
void howManyStickers( float n ) ;
int main ( ) {
	float n ;
	cout << "Enter the side lenght of the Rubik's Cube: " ;
	cin >> n ; 
	howManyStickers( n ) ; 
	}
 

	void howManyStickers( float n ) 
{	float stickers ;
	stickers = (n*n) * 6 ;
	cout << "Number of stickers needed: " << stickers ;
	}
		