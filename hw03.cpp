#include<iostream>
using namespace std;

int main(){

    int x;
    cout<<"Enter input to check if prime or not:"<<endl;
    cin>>x;

    int div=2;

    while(div<x){
        if(x%div==0){
            cout<<"COMPOSITE"<<endl;
            break;
        }
        div++;
    }

}