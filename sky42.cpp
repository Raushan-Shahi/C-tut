// Write a program in C++ to produce a square matrix with 0's
// down the main diagonal, 1's in the entries just above and below
// the main diagonal, 2's above and below that, etc


#include <iostream>
using namespace std;
 
int diff(int a , int b ){
    if(a<b) {
        return b-a ;
    }
    return a-b ;
}
int main(){
int i ,a ,b ;
cout << "enter the order of matrix: "<< endl;
cin >> i ;
for (a=1 ; a<=i ; a++){
    for (b=1; b<=i ; b++) {
        if(b<i){
        cout<< diff(a,b) <<" " ;
        }
        if(b==i){
            cout<< diff(a,b)<< "  "<< endl;
        }
    }

}
return 0;
}


// how banshu did this 
// Write a program in C++ to produce a square matrix with 0's
// down the main diagonal, 1's in the entries just above and below
// the main diagonal, 2's above and below that, etc

// #include <iostream>
// #include <cmath>

// using namespace std;

// void matrix(int a)
// {
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < a; j++)
//         {
//             cout << " ";
//             cout << abs(i - j);
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter numbers of rows " << endl;
//     cin >> n;

//     matrix(n);

//     return 0;
// }