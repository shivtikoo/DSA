#include<iostream> 
using namespace std;

int main(){
    //CONDITIONALS & LOOPS
    bool x=1;
    if(x){
        cout<<"Inside the if loop"<<endl;
    }
    else{
        cout<<"Doesn't enter the if loop"<<endl;
    }

    //taking inputs
    int num;
    cout<<"Enter input:"; cin>>num;//cin.get() takes values of space and tabs tooo
    
    //else if bhi ek conditional hoga

    while(num>0){
        cout<<endl<<"Input is a positive integer!";
        num--;
    }

    // if(num>0){
    //     cout<<endl<<"Input is a positive integer!";
    // }
}