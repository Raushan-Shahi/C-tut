// function overloading with example



#include <iostream>
using namespace std;
 float volume(double r , int h) {
     return 3.14*r*r*h ;
 }

 float volume(int a ){
     return (a*a*a) ;
 } 

 float volume(int l ,int b ,int h){
     return (l*b*h) ;
 }
int main(){
    int a, r, h ,l, b ;
cout << " enter the side length of cube "<< endl;
cin >> a ;
cout <<"volume of cube is:"<< volume(a)<< endl;
cout << "enter the dimensions of cylinder"<< endl;
cout << "radius of base: " << endl;
cin >> r;
cout << "height of cylinder: " << endl;
cin >> h;
cout <<"volume of cylinder is:"<< volume(r,h)<< endl;
cout<< "enter the dimensions of cuboid: "<< endl;
cout << "length of side"<< endl;
cin >> l;
cout << "breadth of cuboid: "<< endl;
cin>> b;
cout<< "height of cuboid: "<< endl;
cin >> h;
cout << "the volume of cuboid is: "<< volume(l,b,h) <<endl;
return 0;
}