//structure is used to combine different types of data together
// remember use of typedef 


#include <iostream>
using namespace std;

typedef struct employee
{
    int eId ;
    char favchar ; 
    float salary;

}sky ;
 
int main(){

sky raushan ;
raushan.eId = 23; 
raushan.favchar = 'n';
raushan.salary = 5000000.00 ; 

cout << raushan.salary << endl;
cout << raushan.eId<< endl;

/*this is normal syntax 
struct employee raushan ;
raushan.eId = 23; 
raushan.favchar = 'n';
raushan.salary = 5000000.00 ;           // dont enter numbers with , like 50,00,000.00

struct employee banshu ;
banshu.eId = 39;
banshu.favchar = 's';
banshu.salary=10000000.0;

cout << "the salary of banshu is: "<< banshu.salary << endl;
cout << "the salary of raushan is: "<< raushan.salary << endl;
cout << "the eId of banshu is: "<< banshu.eId << endl;
cout << "the eId of raushan is: "<< raushan.eId << endl;
*/

return 0;
}