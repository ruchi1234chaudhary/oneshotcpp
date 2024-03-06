#include<iostream>
using namespace std;
void addition( int n, int s){
    if(n==0){
          cout<<s;
          return;
    }
  
    
    addition(n-1, s+n);
    return;
     
     
 
   
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    addition(n, 0);
    return 0;
}