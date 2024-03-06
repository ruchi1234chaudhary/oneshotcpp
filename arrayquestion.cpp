#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    for(int i=0; i<=4; i++){
        if(i%2==0){
            cout<<arr[i]+10<<endl;;
        }
          else{
            cout<<arr[i]*2<<endl;
        }
    }
    
 cout<<arr[5];
   
}