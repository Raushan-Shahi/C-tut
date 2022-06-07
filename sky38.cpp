//to a given number a, find two numbers whose sum is a and the two numbers are
// prime themselves



#include <iostream>
using namespace std;
 
 int prime(int i, int a=2){
    for(a=2 ; a<i ; a++ ){
        int b=i%a;
        if(b==0){
            return 0;
        }
    }
    return 1;
} 
 void check(int a ,int b=2 ){
for(b=2; b<=(a/2); b++){
    int c=prime(b);
    int d =a-b;
    int e=prime(d);
    if((!(c==0))&&(!(e==0))){
        cout<<b<<"+"<<d<<endl;
    }

}
}

int main(){
int a;
cout << "enter the value of a: "<< endl;
cin >> a;
 check(a);
return 0 ;
}