#include<iostream>
using namespace std;
void decreincre(int n){
    if(n==0) return;
    cout<<n<<endl;
    decreincre(n-1);
    cout<<n<<endl;
    return;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    decreincre(n);
    return 0;
}