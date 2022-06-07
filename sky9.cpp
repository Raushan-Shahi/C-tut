// logic operators 
// logic operators ko bracket me rakhna hai 


#include <iostream>
using namespace std ;

int main()
{
int a=4 , b=5 ;
// comparison operators

cout << " the value of a==b is "<< (a==b)<< endl;
cout << "the value of a!=b is " << (a!=b )<< endl ;
cout << "the value of a<=b is "<< (a<=b)<< endl ;
cout << "the value of a>=bis "<< (a>=b)<< endl ;
cout << "the value of a<bis "<< (a<b)<< endl ;
cout << "the value of a>bis "<< (a>b)<< endl ;

// logical operators 

cout << "Is a==b and a<b true at the same time ? "<< ((a==b) && (a<b))<< endl;
cout << "Is a!=b and a<b true at the same time ? "<< ((a!=b)&& (a<b))<< endl;
cout << "if atleast one of a==b and a<b is true or not ?"<< ((a==b)||(a<b))<< endl;
    return 0;
}