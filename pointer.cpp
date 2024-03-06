#include<iostream>
using namespace std;
int main(){
   int x= 3;
   int* p =&x;//Acccess the value of the variable whose address is in the poinetr-> using dereference/*operator 
   cout<<&x<<endl;
   cout<<p<<endl; 
   cout<<*p<<endl;//star operator value of x
    cout<<&p<<endl;
}