//logical operators
//assignment operator 
//comparison operator 

#include <iostream >
using namespace std ;

int main() { 
int a , b ; 
cout << "enter the value of a "<< endl ;
cin >> a ;
cout << " enter the value of b "<< endl ;
cin >> b ;
cout << " the value of a==b is "<< (a==b)<< endl;
cout << "the value of a<=b is "<< (a<=b)<< endl;
cout << " the value of a >=b is "<< (a>=b)<< endl ;
cout << "the value of a!=b is "<< (a!=b )<< endl ;
cout << " the value of a<b "<< (a < b )<< endl ;
cout << "the value of a>b "<< (a>b )<<endl ;
cout << " the value of !(a==b) is "<< !(a==b )<< endl;

// logical operators 
//logical and operator
cout << "is (a==b) and ( a<b ) true at the same time:  "<< ((a==b )&& (a<b))<<endl;
//logical or operator
cout << "if any one of (a==b )and (a<b ) is true:  "<< ((a==b) || (a<b ))<<endl;
//logical not operator
cout <<" reverse of a==b is  "<< !(a==b) <<endl ;

    return 0;
}