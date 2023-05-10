#include<iostream>
using namespace std;

int main(){

        cout<<"Input highest number of the pattern: "<<endl;
        int n;
        cin>>n;

        int i=1;
        while(i<=n){
            int j=1;
            while(j<=(n+1-i)){
                cout<<j;
                j++;
            }
            int x=(i-1)*2;
            while(x){
                cout<<"*";
                x--;
            }
            int c=n+1-i;
            while(c){
                cout<<c;
                c--;
            }
            i++;
            cout<<endl;

        }



}