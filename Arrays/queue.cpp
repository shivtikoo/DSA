#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Shiv");
    q.push("Tikoo");
    q.push("lol");

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front();
}