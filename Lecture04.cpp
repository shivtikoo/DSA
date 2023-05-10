#include<iostream>
using namespace std;

int main(){
    int row;
    char num;
    int col;

    cout<<"Input Pattern Item:";
    cin>>num;
    cout<<endl;

    cout<<"Input Rows:";
    cin>>row;
    cout<<endl;

    cout<<"Input Colums:";
    cin>>col;
    cout<<endl;

    int i=1;
    int count=1;
    while(i<=row){
        int j=1;
        
        while(j<=i){
            cout<<count;
            j++;
            count++;
        }
        i++;
        cout<<endl;
    }
}