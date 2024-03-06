#include<iostream>
using namespace std;
int swap(int& x, int& y){
    int temp;
    x=y;
    y=temp;
    
}
int main(){
    int x=12;
    int y=45;
    swap(x,y);
    cout<<x<<" "<<y;
}