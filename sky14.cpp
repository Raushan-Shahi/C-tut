//manipulator ka use krna sikhe
//setw() ka use kr rhe jisse space milega 

#include <iostream>
#include <iomanip>

using namespace std ;
int main() {
 const int a=34;
 cout << "the value of a was : " << a<<endl ;
int b = 456 , c=3 , d=89 , e=56789;
cout<< "the value of b is "<<  setw(4)<< b<<endl;
cout << "the value of c is "<<  setw(4)<< c <<endl;
cout << "the value of d is "<<  setw(4)<< d <<endl;
cout << "the value of e is "<<  setw(4)<<e << endl;
cout << "the value of a is      "<<  setw(4)<< a<< endl;

    return 0;
}