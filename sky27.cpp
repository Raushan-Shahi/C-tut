// array and pointers
// array me pointers chhupe hote hai
// address new (p+i) = address old (p) + {i* (size of data type )}

#include <iostream>
using namespace std;

int main()
{
    int i;

    int marks[] = {98, 99, 100};

    char initial[] = {'a', 'b', 'c'}; // char always in ' ' brackets
    int *p = marks;                   // dont use '&' for address coz marks is itself an address
    char *q = initial;                //// dont use '&' for address coz initial is itself an address

    cout << "the address of all the three marks are : " << endl;

    for (i = 0; i < 3; i++)
    {
        cout << p + i << endl;
    }
    /*
    cout << *p <<endl<< marks[0]<< endl;
    cout << *(p+1)<<endl<< marks[1]<< endl;
    cout << *(p+2)<<endl<< marks[2]<< endl;
    */
    // alternative for this

    for (i = 0; i < 3; i++)
    {
        cout << *(p + i) << endl
             << marks[i] << endl;
    }
    cout << "the adress of the three characters is " << endl;

    for (i = 0; i < 3; i++)
    {
        cout << q + i << endl;
    }

    /*
    cout << *q <<endl << initial[0]<<endl;
    cout << *(q+1) <<endl << initial[1]<<endl;
    cout << *(q+2) <<endl << initial[2]<<endl;
    */
    // alternative to this
    for (i = 0; i < 3; i++)
    {
        cout << *(q + i) << endl
             << initial[i] << endl;
    }

    return 0;
}