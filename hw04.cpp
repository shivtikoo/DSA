#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int i=0;
    

    while(i<x){
        int j=0;
        char ch='D';
        ch-=i;
        while(j<=i){
            cout<<ch;
            j++;
            ch++;
            
        }
        cout<<endl;
        i++;
        
    
    }
}
