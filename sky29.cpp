//union is useful when you dont whant to allot all variables separate storage 
//union gives all the data types max possible storage
//  as only one of them use storage at a time



#include <iostream>
using namespace std;

 union money {
 int rice ;
 char car_owned;
 float dollar;
 };

int main(){
union money m1;
m1.rice = 34;
cout << "money paid is "<< m1.rice<<endl;
cout << "money paid is "<< m1.car_owned<<endl;
m1.dollar = 20.56;
cout << "money paid is "<< m1.car_owned<<endl;
cout << "money paid is "<< m1.rice<<endl;
cout << "money paid is "<< m1.dollar<<endl;
return 0;
}