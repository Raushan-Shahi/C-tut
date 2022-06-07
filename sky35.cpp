//inline is used to put the function in place of the called 
// function. 


#include <iostream>
using namespace std;

inline int product(int a , int  b ){
    return a*b ;
}

int main(){
int num1 , num2 ;
cout <<" enter the value of num1: "<<endl;
cin >> num1;
cout<<"enter the value if num2: "<< endl;
cin >> num2;
cout << product(num1 , num2) ;
return 0;
}