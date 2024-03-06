#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/4;//INT_MIN is the minimum number
    int mn = arr[0];//INT_MAX is the maximm number
    for(int i=1; i<n; i++){
        // if(arr[i]>min) min=arr[i];
        mn = min(mn,arr[i]);
    }
    cout<<mn;
   
}