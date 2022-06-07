// operator precedence 
//notes me order saved hai  
// check kr lo ek baar is code ko 


#include <iostream> 
#include <iomanip>
using namespace std;
int main() 
{
int a,b,c;
cout << "enter the value of a "<<endl;
cin>>a;
cout << "enter the value of b "<< endl;
cin>>b;
cout<<"enter the value of c"<< endl;
cin>>c;
cout<< "the value of ++b is " << ++b<< endl;
cout << "the value of --b is "<< --b << endl;

cout << "pura masakkat ke baad calculation krne ke baad ye result aaya "<<
((((a*(++b))/c)+a)-(--b))<<endl;
    cout <<"step 1  "<<setw(4) << (a*++b)<<endl;
    int d = a*++b ;
    cout <<" step 2  "<<setw(4) <<d/c<<endl;
    int e=d/c ;
    cout << "step 3  "<< setw(4) <<e+a<< endl;
    int f = e+a;
    cout << "step 4  "<<setw(4) << f-(--b) << endl;

    return 0;
}