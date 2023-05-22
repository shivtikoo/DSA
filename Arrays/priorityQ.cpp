//maxx heap hota hai
#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue <int> p;
    p.push(1);
    p.push(2);
    p.push(91);

    cout<<p.top()<<endl;
    
    p.pop();//will pop 91

    cout<<p.top()<<endl;

    //min heap
    priority_queue<int,vector <int>, greater<int>> x;

    
}
