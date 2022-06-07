// function 
// is declared out of int main()


#include <iostream>
using namespace std;

int sum(int a , int b ){           //formal parameters
    int c = a+b;
    return c ;
} 

int main(){
int num1, num2;                    // actual parameters
cout <<
 "enter the value of two numbers whose sum is to be calculated "<< 
 endl;
 cin>> num1;
 cin >> num2;
 cout <<" the sum of the two numbers is: " << sum(num1 , num2);
return 0;
}