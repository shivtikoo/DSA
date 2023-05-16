#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int res=0;
    int i=0;
    int z;

    while(n){
        //CONVERTING TO BINARY

        int x=n&1;

        z=pow(10,i);
        cout<<z;
        //pow function giving erronous value

        res=(x*z)+res;

        n=n>>1;
        i++;
    }
    cout<<res;

}