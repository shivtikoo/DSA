//RECURSION
//BASIC UNDERSTANDING OF SHIT;
//CALLING THE FUNCTION INSIDE THE FUNCTION ITSELF
//SHOULD HAVE SOME BASE CONDITION VARNA LOOPING HO JAAYEGI
    //CALLING PHASE N RETURNING PHASE
    //CALL KARNA KI REFERENCE TO NEXT FUNC
    //RETURNING HOGAYA TO PERFORM THE REMAINING FUNCTions

//RECURSION USING STACK
//TRACING TREE SE DEKHO HOW MANY CALLS MAD UTNE HI ACTIVATION RECORDS
//ACTIVATION RECORDS MADE IN THE FORM OF A STACK

//TIME COMPLEXITY OF A RECURSIVE FUNCTION
//RECCURENCE RELATION
    //T(N)=T(N-1)+2 
    //WRITE THE CONSRTANT AS 1
    //SUCCEESSIVE SUBSTITUTITON
    //T(N-K)+K=T(N)
    //FOR N=0 T(N)=1
    //THERFEOR PUT THAT IN FOR THE EQUATION
// #include <iostream>
// using namespace std;
// //void function prints values
// //return function returns values
// void funtail(int x){
//     if(x>0){
//         cout<<x<<endl;
//         funtail(x-1);
//         //agar fun call pehle karunga toh it will give nos. in ascending order
//         //that's called head recursion cz fun called sabse pehle
//     }
// };

// int main(){
//     int x=3;
//     funtail(x);
//     //STATIC N GLOBAL VARIABLES
//     //CREATED INSDIE CODE SECTION
//     //STATIC VARIABLE MAI BAAR BAAR ACTIVATION RECORD NAHI CREATE HOTA, EK HI COPY HOTA HAI
//     //AGAR FUNCTION KE BAHAAR TOH GLOBAL VARIABLE
//     //SYNTAX: STATIC INT X=0; IF INSIDE FUNC STATIC AGAR OUTSIDE TOH GLOBAL INT X=0;
    



//     return 0;
// }

//TYPES OF RECURSION
//EEVRY RECURSIVE CALL CAN BE MADE IN THE FORM OF A LOOP
//TAIL RECURSION
    //IF FUNC CALLED IN THE V END, LAST STATEMENT IS THE RECURSIVE CALL
    //ALL FUNCTIONS PERFORMED AT CALLING TIME NOTHING DONE IN RETURNING TIME
    //LOOP TAKES LESS PACE CZ BAAR BAAR ACTIVATION RECORD NAHI
//HEAD RECURSION
    //FIRST STATEMENT INSIDE THE FUNCTION IS THE RECURSIVE CALL
    //ALL TASKS ARE DONE DURING THE RETURNING TIME
    //IN THE FORM OF LOOP, USING FOR LOOP
    //FERSE LESS PSACE LEGA CZ BAAR BAAR ACTIVATION RECORD BANANE KI LOAD NAHI HAI
//TREE RECURSION
    //if func calls itself only once toh linear recursion
    //IF CALLED MORE THAN ONCE THEN IT IS TREE RECURSION
    //MORE RECURSIVE CALLS MATLAB ZYADA ACTIVATION RECORDS MADE
    //when will make trace uss trace tree ki jitni depth utne activation records
    //TIME COMPLEXIYT DEPENDS ON THE CALLS MADE
    //2^n Time Complexity ek certain case mai WHEN TWO RECURSIVE CALLS ARE MADE
//INDIRECT RECURSION
    //A FUNCTION CALLS B FUNC, B CALLS C N C CALLS A TOH CYCLE

// #include <iostream>
// using namespace std;
// void func(int a, int b);
// void funb(int x, int y);
// void funa(int x, int y){
//     if(x>0){
        
//         cout<<x+y; 
//         funb(x,y);  
//     }
// }
// void funb(int a, int b){
    
//     cout<<"Sum of:";
//     cout<<a;
//     func(a,b);
// }
// void func(int a,int b){
    
//     if (a%2==0){
//         cout<<"and it is an even no.";}
//     else{
//         cout<<"it is odd";
//     }
//     funa(a-1,b);
// };
// int main(){
//     int x=3;
//     int y=2;
//     funa(x,y);
//     return 0;
// }

//NESTED RECURSION
    //WILL PASS PA>RAMETER AS A RECURSICE CALL
// #include <iostream>
// using namespace std;

// int nested(int x){
//     if (x>100){
//         return x;
//     }
//     else{
//         return nested(nested(x+11));
  
//     }
// }
// //When using int functions have to print it
// int main(){
//     int x=97;
//     int s;
//     s=nested(x);
//     cout<<s;
//     return 0;    
// }

//Sum Of Natural Numbers
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if (n>0){
//         return n+sum(n-1);
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int x=4;
//     cout<<sum(x);
// }
//ITERATIVE APPROACCH OF THE FUNCTION OWULD BE USING THE FOR LOOP
// int s=0;
// int i;
// for (i=1;i<=n;i++){
//     s=s+i;
// }
// return s;
//Instead of recursion can also us ethe basic formula n(n+1)/2
//Or can also use loop

//FACTORIAL USING RECURSION
// #include<iostream>
// using namespace std;
// int fac(int n){
//     if(n==0 or n==1){
//         return 1;
//     }
//     return n*fac(n-1);
// }
// int main(){
//     int x=4;
//     cout<<fac(x);
// }
//ITERATIVE APPROACH
// int x=1;
// int i;
// for(i=1;i<=n;i++){
//     x=x*i;
// }
// return x;

//POWERS
//EXPONENT FUNCTIONS
//recursive APPROACH
// #include<iostream>
// using namespace std;
// int ex(int b, int p){
//     if(p==0){
//         return 1;
//     }
//     return b*ex(b,p-1);
// }
// //ITERATIVE APPROACH
// int iex(int b, int p){
//     int res=1;
//     int i;
//     for (int i=p;i>=1;i--){
//         res=res*b;
//     }
//     return res;
// }

// int main(){
//     int b=2;
//     int p=3;
//     cout<<ex(b,p);
//     cout<<iex(b,p);
   
// }

//TAYLOR SERIES
//e^x=1+x/1+x^2/2!+....
//Jitni zyada values utni precise value
//Tayloe series ke liye
    //Summmation
    //Power
    //Factorial
//Use Static Variables
//take till n=4
// #include <iostream>
// using namespace std;
// double e(int x, int n){
//     static double p=1;
//     static double f=1;
//     double r;
//     if(n==0){
//         return 1;
//     }
//     r=e(x,n-1);
//     p=p*x;
//     f=f*n;
//     return r+p/f;
// }
// int main(){
//     cout<<e(3,10);
// }


//TAYLOR SERIES USING HORNER'S RULE
//DECREASING THE NO. OF MULTIPLICATIONS
//KEEP TAKING COMMONS
//ORDER OF N HO JAAYEGA PEHLE ORDER OF N^2 THA
// #include<iostream>
// using namespace std;
// int e(int x, int n){
//     int r;
//     int i;
//     for(i=n;i<=1;i--){
//         r=(1+x/i)*r;
//     }
//     return r;
// }
// //REURSIVE
// double re(int x, int n){
//     static double s;
//     if(n==0){
//         return s;
//     }
//     s=1+x*s/n;
//     return e(x,n-1);
// }
// int main(){
//     cout<<re(3,10);
// }
//COULDNT REALLY FIGURE OUT HOW TO GO ABOUT HORNER'S RULE


//FIBONACCI SERIES
// #include <iostream>
// using namespace std;
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     return fib(n-2)+fib(n-1);
// }
// int main(){
//     cout<<fib(7);
//     //ITERATIVE APPROACH
//     int t0=0,t1=1;
//     int i;
//     int n;
//     int s;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         s=t0+t1;
//         t0=t1;
//         t1=s;
//     }
//     cout<<s;

// }
// //Memoization
// //RECURSIVE CALLS KARKE ORDER IS 2^N
// //BUT SAME RECURSIVE CALLS ARE MAE SAME SAME BAAR BAAR
// //MAKE GLOBAL ARRAY OR STATIC ARRAY
// //PUT IN VALUES OF CALLS, SO DON'T HAVE TO MAKE BAAR BAAR. MEMOIZATION
// //USING MEMOIZATION TIME BECOME O(N)
// int F[10];
// int fib(int n){
//     if (n==0 or n==1){
//         F[n]=n;
//         return n;
//     }
//     F[n]=F[n-1]+F[n-2];
//     return fib(n-1)+fib(n-2);
// }


//COMBINATION FORMULA
// #include <iostream>
// using namespace std;

// //just call factorial for different things

// //PASCALS TRIANGLE
// // pascals triangle is so cool n beautiful obseravtion for this
// //RECURSIVE APPROACH
// int c (int n, int r){
//     if(r==0 or n==r){
//          return 1;
//     }
//     return c(n-1,r-1)+c(n-1,r);
// }

// int main(){
//     cout<<c(4,2);
// }

//TOWER OF HANOI
//NO BADA DISC OVER CHHOTA DISC
 // 3 TOWERS EK AUXILLARY TOWER FOR HELPING N SHIT
 // SO THE LAGO I SSIMPLE, JUST MOVE THE N-1 DISCS IN THE AUXILLARY TOWER 
 //TOH(3,1,2,3) 3 DISCS MOVED FROM TOWER 1 TO TOWER 3 WITH THE HELP OF TOWER 2
 //inorder traversal
#include <iostream>
using namespace std;
void toh(int n, int x, int y, int z){
    if(n>0){
        toh(n-1,x,z,y);
        cout<<x<<','<<z<<endl;
        toh(n-1,y,x,z);
    }
}
int main(){
    toh(3,1,2,3);
    return 0;

}