#include<iostream>
using namespace std;
int main(){
   
    for(int i=0 ; i<=20 ; i++){
        if(i==3 || i==8)
        continue;// skip the just above code
        cout<<i<<endl;
    }
}