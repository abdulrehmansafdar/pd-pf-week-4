#include<iostream>
using namespace std;
void tpchecker( int rolls , int people ) ;
int main( ) {
	int rolls ;
	int people ;
	cout << "Number of people in the household: " ;
	cin >> people ;
	cout << "Number of rolls of TP: " ;
	cin >> rolls ;
	tpchecker( rolls , people ) ;
}
	void tpchecker( int rolls , int people )
{	int days ;
	days = (rolls*500)/(57*people) ;
	if ( days >= 14 )
	{ cout << "Your TP will last " << days << " days, no need to panic!" ; }
	if ( days < 14 )
	{ cout << "Your TP will only last " << days << " days, buy more!" ; }
}