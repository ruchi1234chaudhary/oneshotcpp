#include<iostream>
using namespace std;
int sum(int n){
    if(n==1 || n==0) return 1;
    int recAns = n+sum(n-1);
    return recAns;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    sum(n);
    return 0;
}