// call by value and call by refrence in c++ 


#include <iostream>
using namespace std;

int sum(int a, int b ){
    int c =a +b ;
    return c;
}

void swap(int a, int b ){          
    int temp = a;
    a= b;
    b = temp;
} 
// here the values of variables input are 
//the copied value of original value so the change is temperory 

void swappointer(int* a , int* b){
    int temp =*a;
    *a = *b ;
    *b = temp ;
}
//directly the address of the variable is changed so, 
// the change is permanent 

void swaprefrence(int &a, int &b){
    int temp = a;
    a = b ;
    b = temp ;

}

int main(){
int a =4 , b= 5 ;
cout << "the value of a is "<< a << endl;  
cout << "the value of b is "<< b << endl;  
cout << sum(a,b)<< endl ;

swap(a,b);                                  // temporary change
cout << "the value of a is "<< a << endl;  
cout << "the value of b is "<< b << endl;  
cout << sum(a,b)<< endl ;

swappointer(&a,&b);               // changes address so the value changes
cout << "the value of a is "<< a << endl;  
cout << "the value of b is "<< b << endl;  
cout << sum(a,b)<< endl ;

swaprefrence(a,b);           // uses the  refrence variable so the value changes
cout << "the value of a is "<< a << endl;  
cout << "the value of b is "<< b << endl;  
cout << sum(a,b)<< endl ;

return 0;
}