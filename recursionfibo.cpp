#include<iostream>
using namespace std;
int fibo(int a){
    if(a==2 || a==1) return 1;
    int recAns = fibo(a-1) + fibo(a-2);
    return recAns;
}
int main(){
    int a;
    cout<<"Enter a:";
    cin>>a;
   
     int f = fibo(a);
     cout<<f;
     return 0;
}