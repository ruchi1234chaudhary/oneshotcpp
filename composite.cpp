#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter a number:";
    cin>>n;
    bool flag = true; // prime number
 for(int i=2; i<=n/2 ; i++){
    if(n%i==0){
        flag == false;// composite number
        cout<<"COMPOSITE NUMBER";
    }
    else{
        flag == true;
        cout<<"PRIME NUMBER";
    }
 }
}
   
  