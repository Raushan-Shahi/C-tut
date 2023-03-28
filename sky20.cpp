// practice of for loop

#include <iostream>

using namespace std;

int main()
{
    int a, i;
    cout << "enter the number ,whose table u want to calculate" << endl;
    cin >> a;
    cout << "the table of a is " << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << a * i << endl;
    }

    return 0;
}