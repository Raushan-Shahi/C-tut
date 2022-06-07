#include <iostream>
using namespace std;

int main()
{
int a , b ;
cout << "enter the value of a \n" << a ;
cin >> a ; 
cout << "enter the value of b \n " << b ;
cin >> b ;
cout <<" the sum of a+b is \n " << a+b ;
cout << " the value of a-b is \n" << a-b ;

int c = a+b  , d = a-b ;
cout <<" the value of a^2 - b^2 is " << c*d ;
    return 0;
}