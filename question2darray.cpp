#include<iostream>
using namespace std;
int main(){
    int arr[4][2] = {{50,51}, {60,61}, {70,71},{80,81}};
for(int i=0; i<=3; i++){
    for(int j=0; j<=1; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}