#include<iostream>
#include<windows.h>
using namespace std ;
void gotoxy( int x , int y ) ;
int main ( ) {
	gotoxy( 50 , 4) ;
	cout << "   ####     ######    ######      #       #    #            " << endl ; 
	gotoxy( 50 , 5) ;
	cout << "  #    #   #      #   #     #     #       #    #            " << endl ;
	gotoxy( 50 , 6 ) ;
	cout << "  #    #   #      #   #      #    #       #    #            " << endl ;
	gotoxy( 50 , 7 ) ;
	cout << "  ######   #######    #      #    #       #    #            " << endl ;
	gotoxy( 50 , 8 ) ;
	cout << "  #    #   #      #   #      #    #       #    #            " << endl ;
	gotoxy( 50 , 9 ) ;
	cout << "  #    #   #      #   #     #     #       #    #            " << endl ;
	gotoxy( 50 , 10 ) ;
	cout << "  #    #   #######    #####        #######     ##########   " << endl ;
	gotoxy( 50 , 11) ;
	
}
	void gotoxy( int x , int y )
{	COORD coordinates ;
	coordinates.X = x ;
	coordinates.Y = y ;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates) ;
}