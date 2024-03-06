#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int product=1;
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
        product=product*count;
    }
    cout<<product<<endl;
}
