// if else ka use

#include <iostream>

using namespace std;

int main()
{
    char choice;
    cout << " enter your choice from a,b,c,d" << endl;
    cin >> choice;
    if (choice == 'b')
    {
        cout << "you have chosen a correct option " << endl;
        cout << "congratulations, you got 4 marks for chosing the right answer " << endl;
    }
    else
    {
        cout << " you have chooosen a wrong answer " << endl;
        cout << " sorry, you got a -1 marks for choosing the wrong answer" << endl;
    }

    return 0;
}