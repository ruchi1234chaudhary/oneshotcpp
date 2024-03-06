#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks:";
    cin>>marks;
    if(marks>=80 && marks<=100){
       
            cout<<"Grade A"<<endl;
        }
        else if (marks>=50 && marks<=80) {
            cout<<"Grade B"<<endl;
        }
        else if(marks>=30 && marks<=50){
            cout<<"Grade C"<<endl;
        }
        else{
            cout<<"fail"<<endl;
        }
   
}
