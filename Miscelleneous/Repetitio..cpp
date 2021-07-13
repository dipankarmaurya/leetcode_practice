#include <iostream> 

using namespace std ; 

string s ; int count [ 128 ];


int main () { 
    cin >> s ;
	 for ( int i = 0 ; i < s . size (); i ++) { 
        count [ s [ i ]] ++; } 
		int odds = 0 ; 
		for ( char c = 'A' ; c <= 'Z' ; c ++)
		 { if ( count [ c  ]% 2 == 1 )
		  odds ++; }
		   if ( odds > 1 ) { 
        cout << "NO SOLUTION \ n" ; 
		return 0 ; }
		 for ( char c = 'A' ; c <= 'Z' ; c ++) { 
        cout << string ( count [ c ] / 2 , c ); } 
		for ( char c = 'A' ; c <= 'Z' ; c ++) { 
		if ( count [ c ]% 2 == 1 ) cout << c ; }
		 for ( char c = 'Z' ; c > = 'A' ; c -) { 
        cout << string ( count [ c ] / 2 , c ); } 
         	2cout << "\ n"   
           
    
         
     ; }
