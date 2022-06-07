//recurssion and recursive function 
// this is a factorial series


#include <iostream>
using namespace std;

int factorial(int n) {
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
int a ; 
cout << "enter the number whose factorial is to be calculated: "<< endl;
cin>> a;
cout << factorial(a);
return 0;
}