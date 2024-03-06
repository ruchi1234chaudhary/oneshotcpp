#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"it is divisible by 3 and 5"<<endl;
    }
    else{
        cout<<"not divisible by 3 and 5";
    }
}