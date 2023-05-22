#include<iostream>
#include<lsit>

using namespace std;

int main(){
    //doubly linekd list 
    //two pointers

    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for(i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    //copying a list
    list<int> x(l);
    //initialisation of list
    list<int> k(6,20);

}