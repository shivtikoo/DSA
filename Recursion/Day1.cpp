// function that calls itself

// badi problem ka solution dpeending upon chhoti problem

#include<iostream>
using namespace std;

int factorial(int x){
    

    //base case
    // base case mai humesha return function


    if(x==0){
        return 1;
    }
    int ans=x*factorial(x-1);
    
    return ans;
}

void printer(int n){
    if(n==0){
        return;
    }
    printer(n-1);
    cout<<n<<endl;
}

int main(){
    // factorial
    int x;
    cin>>x;

    int ans=factorial(x);

    cout<<ans;

    printer(x);
}