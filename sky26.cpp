//array in a for loop 
// for inside a for 


#include <iostream>
using namespace std;
 
int main(){
    int i , j ;
    char  k[4] ;
    int m[3] ; 

for (int i=0; i<4 ; i++) {
cout << " enter the name of kid:  " << i+1 << endl;
cin >> k[i];
        cout << "enter the marks of kid:  "<<i+1 << endl;
    for (j=0; j<3 ; j++){
        cout << "marks in sublect: "<<j+1 << endl;
        cin >> m[j] ;
    }
    cout << "the total marks of kid: "<< i+1 << " is "<<m[0]+m[1]+m[2]<<endl; 
}

return 0;
}