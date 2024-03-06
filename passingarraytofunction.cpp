#include<iostream>
using namespace std;
void change(int brr[]){
    brr[0]=9;
}
int main(){
    int arr[3] = {1,2,3};//declaration+initialization

  for(int i=0; i<=2; i++){
    cout<<arr[i]<<endl;;
  }
  change(arr);
  for(int i=0; i<=2; i++){
    cout<<arr[i]<<endl;
  }


   
}