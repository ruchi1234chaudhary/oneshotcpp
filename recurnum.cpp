#include<iostream>
using namespace std;//After call
void increasing(int n){
    if(n==0) return;

     increasing(n-1);//call
     cout<<n;//code
     return;

     return;}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
increasing(n);
return 0;
}