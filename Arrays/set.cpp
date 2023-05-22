//unique elements stored only
//bst ka use karke
//modify nahi hota
//sorted order mai aate hai

#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    
    s.erase(s.begin());

    //to check if element present or not
    cout<<s.count(2);


    set<int>::iterator it=s.find(4);




}
