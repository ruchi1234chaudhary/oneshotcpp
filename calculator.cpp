// it is also another replacement of if-else
#include<iostream>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cin>>n2;
    if(op=='+') cout<<n1+n2;
     if(op=='-') cout<<n1-n2;
      if(op=='*') cout<<n1*n2;
       if(op=='/') cout<<n1/n2;
}