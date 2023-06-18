#include<iostream>
using namespace std;

int power(int n, int p){
    
    int ans=1;

    if(p==0){
        return ans;
    }

    if(p==1){
        return n;
    }

    if(p!=2){
        n*=n;
        p--;
        ans =n* power(n,p/2);
    }
    else{
        ans =n* power(n,p/2);
    }

    return ans;

}

int main(){

    int n;
    cin>>n;

    int p;
    cin>>p;

    int ans=power(n,p);

    cout<<ans;
}