#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    //LIFO
    //Last in first out

    cout<<"Top Element: "<<s.top()<<endl;

}