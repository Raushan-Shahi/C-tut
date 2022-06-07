//selection control structure - (if, else-if , else ladder)
/* if (condition ){
    code
     }  */

#include <iostream>

using namespace std;
 int main() { 
int age ;
cout << " tell me your age"<< endl;
cin >> age;
if ((age<18)&&(age>0)){
    cout << "aap abhi bache hai , pehle bare ho jaiye . Tab daru ka sochiyega  "<<endl;

}
else if (age==18){
    cout << "bas kuchh din aur sabr kr lijiye ,fir daru hi daru hoga apke zindagi me  "<< endl;

}
else if ((age >18)&&(age<100)){
cout<< "jam ke daru pijiye, aapke liye hi to party hai "<<endl;
}
else if (age<0){
    cout<<"pehle paida to le le "<<endl;
    
}
    else if (age>100 )
    {
        cout<<"extra zindagi jee rho, daru peene aa gye hai "<<endl ;
    }
    else{
        cout<<"ab aap jaa sakte hai"<<endl;
    }
     return 0;

 }