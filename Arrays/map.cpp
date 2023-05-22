#include<iostream>
#include<map>
//key value pait
//all keys are unique
//key has just one image

using namespace std;

int main(){
    map<int,string> x;

    x[1]="Shiv";
    x[2]="Tikoo";

    for(auto i:x){
        cout<<i.second<<" ";
    }


}