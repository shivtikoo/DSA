//a dynamic array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout<<v.capacity()<<endl;
    //will be 4 becaus ebhar gaya then size double kia to push 3
    //jab bhar jaata hai toh doube size ho jaata hai

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;;

    cout<<v.at(1)<<endl;

    v.pop_back();
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    vector <int> x(5,1);
    cout<<x.front()<<endl;
    cout<<x.back()<<endl;

    //copying one vector onto another
    vector <int> r(x);

    for(int i=0; i<r.size();i++){
        cout<<r[i]<<" ";
    }


}
