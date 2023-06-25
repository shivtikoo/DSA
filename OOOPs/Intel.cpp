#include<iostream>
using namespace std;

class Hero{

    char name[20];
    int health;
    
    public:
    char level;


    //CONSTRUCTOR
    Hero(){
        cout<<"Constructor invoked";
    }

    void setter(char x){
        level=x;
    }

    char getter(){
        return level;
    }


    
};

int main(){
    Hero Shiv;
    //Constructor invoked on object instantation
    //Ramesh.Hero call ho jaata hai
    //default mai invoke ho jaata hai
    //DEFAULT CONSTRUCTOR
    
    //can use THIS also this->health
    
    //COPY CONSTRUCTOR
    //INBUILT APNE AAP COPY KARNE KE LIYE EK OBJECT INTO ANOTHER
    //COPY OCNSTRUCTOR MAI PASS BY REFERENCE

        //SHALLOW AND DEEP COPY
        //DEFAULT COPY OCNSTRUCTOR
        //SHALLOW COPY KARTA HAI
            //CHANGES IN ORIGINAL COPY WILL MAKE CHANGE
            //IN THE ORIGINAL WILL CAUSE CHANGE IN COPY OTO
            //KYONKI ADDRESS STORE HOTA HAI

        //DEEP COPY
            //EK NAYA DS BANA KAR USKA ADDRESS DETA HAI


    //COPY ASSIGNMENT OPERATOR

    //DESTRUCTOR
        //MEMORY DEALLOCATION
        //STATIC KE LIYE DESTRUCTOR AUTOMATICALLY CALLED

    //STATIC KEYWORD
        //AISA DATAMEMBER CREATE KARTA HAI JO CLASS KO BELONG KARTA HAI N NOT TO THE OBJECT
        //NO NEED TO CREATE OBJECT FOR ACCESSING IT
        //SCOPE RESOLUTION OPERATOR USE KARO

        //STATIC FUNCTIONS
        //NO NEED TO CREATE OBJECT
        //THIS KEYWORD NAHI HOTA
            //CZ THIS IS POINTER TO CURRENT OBJECT

        //CAN ACCESS ONLY STATIC MEMBERS
        



}