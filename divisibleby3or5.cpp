#include<iostream>
using namespace std;
int main()
    {
        int n;
        cout<<"Enter a number";
        cin>>n;
        if(n%5==0 || n%3==0){
            cout<<"divisible by 3 or 5"<<endl;
        }
        else{
            cout<<"Not divisible by 3 or 5"<<endl;
        }

    }
