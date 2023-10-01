#include<iostream>
#include<windows.h>
using namespace std ;
void pet(int holidays) ;
int main( ) {
   int holidays ;
   cout << "Holidays: " ;
   cin >> holidays ;
   pet(holidays) ; }
   void pet(int holidays) 
{  int workingdays ;
   int time ;
   int difftime ;
   int hours ;
   int min ;
   workingdays = 365 - holidays ;
   time = ( holidays*127) + (workingdays*63) ;
   difftime = 30000 - time ;
   hours = difftime/60 ;
   min = difftime % 60 ;
   if ( difftime <= 0 )
   {cout << "Tom will run away" << endl ;
   cout << abs(hours) << " hours and " << abs(min) << " minutes for play" ;}
   else {
      cout << "Tom sleeps well" << endl ;
      cout << hours << " hours and " << min << " minutes less for play" ;
   } 
}


