//function 
//function protyping -> declare the function before starting the 
// content and then you can construct the function body just after 
// finishing the main content 



#include <iostream>
using namespace std;

char d(int a , int b )
{
    if (a >= b ) 
    {
        return 'T';
    }
    else
    {
        return 'F' ; 
    }
}

int main()
{
int x ,y ;
cout << " enter the value of x"<< endl;
cin >> x ;
cout << " enter the value of y"<< endl;
cin >> y ;
cout << d(x,y) ;

return 0;
}