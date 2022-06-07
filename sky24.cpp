// pointers 
// it is the address of a data 

#include <iostream>
using namespace std;
 
int main(){
int a =3 ;
int* b = &a;
int** c = &b ;
cout << " the value of a is "<< a << endl;
cout << "the address of a is "<< b << endl;
cout << "the address of b is " << c << endl;
cout << " the content in c is "<< **c<< endl;

return 0;
}