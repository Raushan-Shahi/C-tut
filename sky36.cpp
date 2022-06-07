// default function 
// you don't need to enter the value of default value, wo saved rehta hai 
// to when u enter the value it uses that value nhi to default se kaam chala leta hai 


#include <iostream>
using namespace std;

float moneyreceived(int current_money , float factor = 1.04){
    return current_money * factor ;
}

int main(){
int money1 , money2 ,factor ; 
cout << "enter the money1 you have in hand: " << endl;
cin >> money1 ;
cout << moneyreceived(money1) ;
cout << "\nenter the money2 you have in hand: " << endl;
cin >> money2 ;
cout << moneyreceived(money2, 1.15) ; 
return 0;
}