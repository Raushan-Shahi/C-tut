//prime number nikalna sikhe function ka use krke 


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

int main(){
int i;
cout<< "enter the value of i: "<<endl;
cin >> i;
int c = prime(i);
if (c==0){
    cout<<i<< " is a composite number"<< endl;
}
if (c==1){
    cout<<i<< " is a prime number "<< endl;
}
return 0;
}