//OOPS
    // PRGRAMMING PARADIGM THAT REVOLVE AROUND OBJECTS,
    //STATES AND BEHAVIOR BASICALLY
#include<iostream>
#include "Hero.cpp"
using namespace std;

// MAKES A TEMPLATE
// class Hero{
//     //CLASS A USER DEFINED DATATYPE

//     char name[20];
//     int health;
//     char level;

// };

int main(){

    Hero Ramesh;
        //TRACK KARNE KE LIYE 1 BYTE
            // TOH EMPTY CLASS KA SPACE 1 BYTE

    // ACCESS USING DOT OPERATOR
        //ACCESS MODIFIERS
            //PUBLIC
            //PRIAVTE
            //PROTECTED
        
    //GETTER SETTER
        //FUNCTION TO ACCESS PRIAVTE VARIABLES FROM THE CLASS BASICALLY
    

    Ramesh.setter('A');
    cout<<Ramesh.getter()<<endl;
    
    cout<<sizeof(Ramesh)<<endl;

    //DYNAMIC ALLOCATION
    Hero *x=new Hero;

    x->setter('B');
    cout<<x->getter()<<endl;






    return 0;

}