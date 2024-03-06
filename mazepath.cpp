#include<iostream>
using namespace std;
int maze(int cr, int cc, int er, int ec){
    int rightWays =0;
     int downWays =0;
     if(cr==er && cc==ec) return 1;
     if(cr==er){
        //only right calls
          rightWays += maze(cr, cc+1, er, ec);

     }
     if(cc==ec){
        downWays += maze(cr+1, cc, er, ec);

     }
    if(cr<er && cc<ec){
         rightWays += maze(cr, cc+1, er, ec);
         downWays += maze(cr+1, cc, er, ec);
    }
     
int totalWays =rightWays + downWays;
return totalWays;
}
int main(){
    int n;
    cout<<"Enter no of rows of maze:";
    cin>>n;
    int m;
    cout<<"Enter no of columns of maze:";
    cin>>m;
    int noOfWays = maze(1,1,n,m);
    cout<<noOfWays;
}