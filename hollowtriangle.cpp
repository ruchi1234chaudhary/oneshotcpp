#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1; i<=n-2; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n-2 || j==1 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            

        }
        cout<<endl;
    }
}