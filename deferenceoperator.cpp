#include<iostream>
using namespace std;
int main(){
    int x=12;
    int* p=&x;
    cout<<x<<endl;
    *p =23;
        cout<<x<<endl;
}