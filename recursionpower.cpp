#include<iostream>
using namespace std;
int power(int a, int b){
    if(a==0 || b==0) return 1;
    int recAns = a*power(a,b-1);
    return recAns;
}
int main(){
    int a;
    cout<<"Enter a:";
    cin>>a;
    int b;
    cout<<"Enter b:";
    cin>>b;
     int p = power(a,b);
     cout<<p;
}