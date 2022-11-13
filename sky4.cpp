// 1. global and local variable 
// 2. void (khali jagah me kuch extra program likh lete hai )

#include<iostream>
using namespace std; 

int glo = 8 ;

void sum() {
int f = 14;
cout << f <<endl  ;
cout << glo<<endl ;

}

int main() {
    int a = 7 , b = 89;
// cout << "i am in class " << a <<  "\n and i got total marks "<<b ;
sum() ;
cout <<  glo <<endl;
 cout <<a<<endl ;
cout << glo<<endl ;
glo = 67 ;
cout << glo<<endl ; 
    return 0;
}
