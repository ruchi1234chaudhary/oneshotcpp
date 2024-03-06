#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<sizeof(arr)<<" ";
    int product=0;
    for(int i=0; i<=4; i++){
       product=product*arr[i];
       
    }
     cout<<product;
}