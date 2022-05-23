#include<iostream>
using namespace std;
//C & C++ concepts
struct rectangle{
    int length;
    int breadth;
};

int sub(int x, int y ){
    x++;
    int a;
    a=x-y;
    return a;
};
void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
};
int area (rectangle *x){
    int area=x->length*x->breadth;
    //So, for pointers you can't really use
    //*x.length but have to use x->length
    return area;
};

int main(){
 //Arrays
    // int arr[5];
    // //If no value given for certain index then the default value is 0
    // for (int i=0;i<5;i++){
    //     arr[i]=i+1;
    //     cout<<arr[i]<<endl;
    // }
    // //FOR EACH LOOP
    // for (int x:arr){
    //     cout<<x<<endl;
    // }
    // cout<<sizeof(arr);
    // //each int 4 bytes so 20
    // cout<<"Enter size of arr:"<<endl;
  
// //STRUCTURES
//   struct rectangle r={3,4};
// //If we do this declaration outside, it makes like 'r' a global variable
// //Everything inside the main memory is usually inside main part of stack
//   r.length=4;
//   cout<<"area of rectangle =";
//   cout<<r.length*r.breadth;

//   //Size of char is nearest bigger size
//   //size of int is 4 bytes

// //POINTERS
// int x;
// cout<<"Enter the no. of your choice:";
// cin>>x;
//  int *p;
//  p=&x;
//  cout<<*p;
//  //ALLocatin g in HEAP 
//  p=new int[sizeof(x)];
//  //Once used the memory delete the memory too
//  delete []p;
//  //for Arrays
//  int D[]={3,4,5};
//  int *y;
//  y=D;
//  cout<<*y<<endl;
//  //EVERY POINTER SAME SIZE 8 BYTES

// //REFERENCE
// //Nicknaming shit
// //NOT a part of C only CPP

// int n =10;
// int &x=n;
// //USEFUL in PARAMETER PASSING
// x++;
// cout<<n;

// //If a star in fornt of variable its a POINTER
// //If a and in front of the variable its a REFERENCE

// //POINTER TO A STRUCTURE
//  struct rectangle x={10,4};
//  //CAN write it without the struct also
//  struct rectangle *l;
//  l=&x;
//  cout<<(*l).length;
//  //HAVE TO KEEP INSIDE BRACKET CZ HIGHER PRIORITY

// l= new struct rectangle [sizeof(x)];
// //ALLOCATING IN HEAP^^

// delete []l;
// //DELETING THE ALLOCATED SPACE GIVEN IN HEAP^

// //FUNCTIONS
// //grouping instructions
// //Monoloithic programming- No functions
// //With Function- Procedural Programming
// cout<<sub(3,4);
// //Function ke liye extra memory is used as in activation records
// //Once done with function, activation records done for

// //PARAMETER PASSING
// //PASS BY VALUE
// //WHile calling the function we use new variables to relate to the formal parameters
// int c=3;
// int d=2;
// cout<<sub(c,d)<<endl;;
// cout<<c-d;

// //PASS BY ADDRESS
// //FOrmal parameters are POINTERS as address is passed
// int x=3;
// int y=6;
// swap(&x,&y);
// cout<<x<<endl;
// cout<<y;

// //PASS BY REFERENCE
// //Just use & in front of formal parameters
// //just use
// //swap(x,y)
// //and outside main function 
// //put swap(&x,&y)

// //ARRAY AS A PARAMETER
//  //Arrays are always passed by address

// //STRUCTURE AS A PARAMETER
// rectangle r={3,4};
// cout<<area(&r);
// //Using struct array can be passed BY value

//STRUCTURES AND FUNCTIONS
 //OBJECT ORIENTATION

//IF THERE ARE FUNCTIONS FOR A STRUCT THEN JUST MAKE THE STRUCT A CLASS
//INCLUDE ALL FUNCTIONS INSIDE THAT CLASS
//ONCE THE FUNCTIONS ARE INSIDE THE CLASS THEY DON'T HAVE TO TAKE TEH STRUCT AS AN ARGUMENT AND CAN LEAVE IT BLANK
//MAKE STRUCT KA SHIT PRIVATE:
//MAKE FUNTIONS PUBLIC:

//REFERENCING THE STRUCT IN THE MAIN FUNCTION CAN DO IT SIMPLY WITHOUT ANY
//ADDITIONAL SHIT AS IT HAS NOW BECOME AN OBJECT

//CONSTRUCTOR SAME NAME AS THE CLASS AND IT DOES THE JOB OF INITIALISING THE STRUCT
//CALLING THE FUNC INSIDE THE CLASS IS
//USING VARIABLE WE INITIALISED THE CLASS 
//LET VARIABLE BE X THEN CALLING THE FUNCTION X.FUN01

//MONOLITHIC PROGRAM
//SAB KUCH MAIN KE ANDAR

//MODULAR PROGRAM
//MAKE FUNCTION, EASIER TO HANDLE BASICALLY AGAR ERRORS VAGERA SHOW UP

 //OBJECT ORIENTED PROGRAM
 //USE OF CLASS BASICALLY
 //USE OF CLASS BASICALLY THE DIFFERENCE BETWEEN  C AND CPP

 //CONSTRUCTOR AND CLASS
 //INCLUDE<IOSTREAM>
 //USING NAMESPACE STD;
//  CLASS RECTANGLE{
//      PRIVATE:
//      INT LENGTH;
//      INT BREADTH;
//      PUBLIC:
//      RECTANGLE(){LENGTH=BREADTH=1;}//CONSTRUCTOR
//      RECTANGLE(INT L, INT B);//PARAMETERISED CONSTRUCTOR
//      INT AREA();
//      INT PERIMETER();
//      INT GETLENGTH(){RETURN LENGTH;}
//      VOID SETLENGTH(INT L){LENGTH=L;}
//      ~RECTANGLE();//DESTRUCTOR TO TAKE BACK DYNAMIC MEMORY ALLOCATION


//      //NOW MAKING FUNCTIONS ISKE BAAD IS LIKE
//      RECTANGLE ::RECTANGLE(INT L,INT B){
//          LENGTH=L;
//          BREADTH=B; 
//      }
//      INT RECTANGLE::AREA(){
//          RETURN LENGTH*BREADTH;
//      }
//      INT RECTANGEL::PERIMETER(){
//          RETURN 2*LENGTH*BREADTH;
//      };
 
 //TEMPLATE
 //CAN USE SAME CLASS FOR DIFFERENT DATA TYPES
 //MAKE IT A TEMPLATE; A GENERIC CLASS 
 //WRITE CLASS KE UPAR TEMPLATE <CLASS T>
 //THEN WRITE ITS FUNCTIONS AS
 //T ARITHMETIC<T>::ADD()
 




 }



 
 











    return 0;


}