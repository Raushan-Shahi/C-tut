#include <iostream>
using namespace std;
    
int factorial(int n) {
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n, girl[n];
    cin>> n;
    for(int i =0; i<n;i++)
    {
        cin>> girl[i];
    }
    for(int i =0; i<n;i++)
    {
        cout<< factorial(girl[i])<<endl;
    }

return 0;
}