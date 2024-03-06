#include<iostream>
using namespace std;//Prameterised way
void increasing(int x,int n){
    if(x>n) return;//base case
     cout<<x<<endl;
     increasing(x+1,n );
     return;}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
increasing(1,n);
return 0;
}