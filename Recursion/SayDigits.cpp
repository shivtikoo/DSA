#include<iostream>
using namespace std;

void say(int n){
    if(n==0){
        return ;

    }
    string arr[10]={
        "zero","one","two","three",
        "four","five","six","seven",
        "eight","nine"
    };

    say(n/10);
    cout<<arr[(n%10)]<<endl;

}

int main(){
    int n;
    cin>>n;
    say(n);
}