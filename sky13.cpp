//reference vaiables 
//type casting float(x) and (int)x

#include <iostream>
using namespace std;
int main() 
{ 
float x= 455.37;
float &y =x ;
float &z = y ;
cout << x << endl;
cout << y << endl;
cout << z << endl;
float r=23.678 ;
cout << "the round off value of r is "<<int(r) << endl;
cout << "the round off value of x is "<< int(x)<< endl;
return 0;
}