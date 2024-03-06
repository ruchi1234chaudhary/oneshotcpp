#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter 1st no :";
    cin>>a;
     int b;
    cout<<"Enter 2nd no :";
    cin>>b;
     int c;
    cout<<"Enter 3rd no :";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"a is graeter"<<endl;
        }
        else{
            cout<<"c is greater"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"b is greater"<<endl;
        }
        else{
            cout<<"c is greater"<<endl;
        }
    }
  

    
}