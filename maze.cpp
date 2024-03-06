#include<iostream>
using namespace std;
int maze(int n, int m){
    int rightWays = 0;
    int downWays = 0;
    if(n==1 && m==1) return 1;
    if(n==1){//cannot go downwards only rightwards
      rightWays += maze(n,m-1);
    }
     if(m==1){//cannot go rigthwards only downwards
      downWays += maze(n-1,m);
    }
    if(n>1 && m>1){
         rightWays += maze(n,m-1);
         downWays += maze(n-1,m);

    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main(){
   int n;
    cout<<"Enter no of rows of maze:";
    cin>>n;
    int m;
    cout<<"Enter no of columns of maze:";
    cin>>m;
    int noOfWays = maze(n,m);
    cout<<noOfWays; 
}