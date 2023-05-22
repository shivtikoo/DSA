//STL

#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,4> a={1,2,3,4};

    cout<<"Empty or NOT: "<<a.empty()<<endl;
    cout<<"First Element: "<<a.front()<<endl;
    cout<<"Last ELement: "<<a.back()<<endl;

    int i;
    cin>>i;
    cout<<"element at "<<i<<" index: "<<a.at(i);



}