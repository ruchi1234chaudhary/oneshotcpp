#include<iostream>
using namespace std;
int powerlog(int a, int b){
    if(b==0) return 1;
    if( b==1) return a;
    int x = powerlog(a,b/2);
    if(b%2==0){//even
   
    int recAns1 = x * x;
    return recAns1;}
    else{
         int recAns2 = x * x * a;
    return recAns2;
    }
}
int main(){
    int a;
    cout<<"Enter a:";
    cin>>a;
    int b;
    cout<<"Enter b:";
    cin>>b;
     int p = powerlog(a,b);
     cout<<p;
}