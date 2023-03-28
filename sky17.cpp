// switch ka use sikhe isme
//  switch k template dekh lijiyega
// to use a range of check in case use it like -->  x ... y where x is the lower limit and y is the upper limit.

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age " << endl;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "you are 18 years old" << endl;
        break;
    case 21 ... 35:
        cout << "byah to ho hi gya hoga kya ji " << endl;
        break;
    case 60:
        cout << "chaliye ab retirement ka samay ho gya hai " << endl;
        break;

    default:
        cout << "aap special nhi hai , mast live your life" << endl;
        break;
    }

    return 0;
}