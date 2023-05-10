#include<iostream>
using namespace std;

int main(){

    int ch;
    cout<<"Enter the number for the pattern:";
    cin>>ch;
    cout<<endl;
    
    
    int row;
    cout<<"Enter the number of rows in the pattern:";
    cin>>row;
    cout<<endl;
    

    int col;
    cout<<"Enter the number of columns in the pattern:";
    cin>>col;
    cout<<endl;

    int i=1;
    int x=row;

    while(i<=row){
        int j=1;
        while(j<=x){
            cout<<ch;
            j++;
        }
        x--;
        cout<<endl;
        ch++;
        i++;   
    }
}