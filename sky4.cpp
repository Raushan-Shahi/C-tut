// 1. global and local variable 
// 2. void (khali jagah me kuch extra program likh lete hai )

#include<iostream>
using namespace std; 

int glo = 8 ;

void sum() {
int f = 14;
cout << f  ;
cout << glo ;

}

int main() {
    int a = 7 , b = 89 , glo = 0 ;
cout << "i am in class " << a <<  "\n and i got total marks "<<b ;
sum() ;
cout <<  glo ;
 cout <<a ;
cout << glo ;
glo = 67 ;
cout << glo ; 
    return 0;
}
