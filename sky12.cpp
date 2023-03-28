//::c ka use krte hai scope resolution operator ka baat krne ke liye 
//34.4f is float and 34.4 is double default and 34.4l is long double
// sizeof() size pta karne ke liye kaam aata hai 

#include <iostream> 
using namespace std ;
int a =4 ;
int main() 
{
int a= 2 , b =5 ;
float c =3.56 ;
cout << a<< endl ;
cout << b << endl ;
cout << c<< endl ; 
cout << ::a<< endl ;
long double d = 45.67;
cout << "the size of c is "<< sizeof(c)<< endl ; 
cout << "the size of d is "<< sizeof(d)<<endl ;
cout << sizeof(45.678f)<<endl ;
cout << sizeof(34.46)<<endl;
cout << " the integer part of d is "<< int(d)<<endl;
cout << "the integer part of c is "<<int(c)<< endl;
cout << "the sum of integer part of c and d is "<< int(c)+int(d) <<endl;
cout << "the fractional part of c is "<< c-int(c) <<endl;
cout << " the fractional part of d is "<< d-int(d) << endl;

  return 0;
}