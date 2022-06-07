// recursion and recursive series function
// fibonnaci series 


#include <iostream>
using namespace std;

int fib(int n ){
    if (n<=2) {
        return 1 ;
    }
    return (n-2) + (n-1);
}
int main(){
int i ;
cout << "enter the number in terms of fibonnaci series: "<< endl;
cin>> i ;
cout << fib(i);
return 0;
}

// how gomku did it 

// #include<iostream>
// using namespace std;

// int fibonacci(int n){
//     if (n<=2)
//     {
//         return 1;
//     }
//     else{
//         return (n-2) + (n-1);
//     }
// }

// int main(){
//     int a;

//     cout << "enter a no."<< endl;
//     cin >>a;

//     cout <<"A fibonacci number from your entered number is "<<endl;
//     cout <<fibonacci( a ) <<endl;
//     return 0;
// }