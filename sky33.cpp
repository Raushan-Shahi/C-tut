// function 
// void ka use sikhe and practice of function prototyping 


#include <iostream>
using namespace std;

void g() ;
int sum(int ,int );

int main(){
int a=45 , b = 67;
cout << sum(a,b);
g() ;
return 0;
}

void g(){
    cout<< "\nhello gm";
} 

int sum(int a , int b){
  int c=a+b ;
  return c;
}