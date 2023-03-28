// break and continue

#include <iostream>
using namespace std;

int main()
{
    int i;
    for (int i = 0; i < 40; i++)
    {
        if (i == 2)
            continue;
        cout << i << endl;
        if (i == 34)
            break;
    }
    return 0;
}