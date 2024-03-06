#include<iostream>
using namespace std;
int main(){
    int sp;
    cout<<"Enter selling price:";
    cin>>sp;
    int cp;
    cout<<"Enter cost price:";
    cin>>cp;
    if(sp>cp){
        cout<<"profit"<<endl;
        cout<<sp-cp<<endl;
    }
    else if(cp>sp){
    cout<<"loss"<<endl;
        cout<<cp-sp<<endl;
                }
                else{
                    cout<<"no profit no loss"<<endl;
                }
}