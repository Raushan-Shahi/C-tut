#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n, flag = 0;
    cout << "the number of input." << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array" << endl;
    for(i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    for (j = 0; j < (n - 1); j++)
    {
        for (k = j + 1; k < n; k++)
        {
            if ((k - j) != (arr[k] - arr[j]))
            {
                flag = flag + 1;
            }
            else
                flag = flag - 0;
        }
    }
    cout << flag;
    return 0;
}