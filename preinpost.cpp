#include<iostream>
using namespace std;
void preInPost(int n){
    if(n==0) return;
    cout<<n<<endl;//Pre
    preInPost(n-1);
    cout<<n<<endl;//In
    preInPost(n-1);
    cout<<n<<endl;//post
    return;
}

int main(){
   int n;
   cout<<"Enter a number:";
   cin>>n;
   preInPost(n);
   return 0;
}