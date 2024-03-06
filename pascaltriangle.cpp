#include<iostream>
using namespace std;

    int fact(int x){
    int f=1;
    for(int i=1; i<=x; i++){
        f*=i;
    }
    return f;

 
}
int main(){
     int n;
  cout<<"Enter n:";
  cin>>n;
  
   
  
    for(int i = 0; i<=n ; i++){
         
        for(int j = 0; j<=i;  j++){
            int a=fact(i);
   int b=fact(j);
    int c=fact(i-j);
            cout<<a/(b*c);
        }
       cout<<endl;
    }
}