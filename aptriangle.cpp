#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of row:";
    cin>>n;
    
    for(int i = 1; i<=2*n-1 ; i=i+2){
        for(int j = 1; j<=i;  j=j+2){
            cout<<j;
        }
        cout<<" "<<endl;
    }
}
//for(int i =1; i<=n; i++){
   // int a=1;
    //for(int j=1; j<=i; j++){
       // cout<<a<<" ";
       // a+=2;
   // }
//}