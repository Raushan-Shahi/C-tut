//switch ka use sikhe isme 
// switch k template dekh lijiyega


#include <iostream>
using namespace std;
int main()
    {
int age ;
cout << "enter your age "<< endl;
cin >> age ;
switch (age)
{
case 18:
    cout<< "you are 18 years old"<< endl;
    break;
case 29:
cout << "byah to ho hi gya hoga kya ji "<<endl;
break;
case 60:
cout << "chaliye ab retirement ka samay ho gya hai "<<endl;
break;

default:
cout<<"aap special nhi hai , mast live your life" << endl;
    break;
}


        return 0;
    }