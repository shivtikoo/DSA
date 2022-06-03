//ARRAY ADT
//DATASET ARRAY N OPERATIONS ON IT TOGETHER ARE CALLED ARRAY ADT
// #include <iostream>
// using namespace std;

// class array{
//     public:
//     int *a;
//     int size;
//     int length;

//     void display(){
//         for(int i=0;i<size;i++){
//             cout<<a[i]<<',';
//         }
//     }

// };

// int main(){
//     class array x;
//     cout<<"Enter Array size"<<endl;
//     cin>>x.size;
//     x.a= new int [x.size];
//     x.length=0;

//     //enter elements
//     cout<<"Enter all elements:";
//     for (int i=0;i<x.size;i++){
//         cin>>x.a[i];
//     }
//     x.display();

// }



//DISPALYING ELEMENTS IN AN ARRAY
    //FOR LOOP CHALA KAR

//ADDING OR APPENDING IN AN ARRAY
    //A[LENGTH]=3;
    //LENGTH++;

//INSERTIONS
    //INSERT(4,15)
    //FOR LOOP CHALA KAR SAB EK EK AAGE SHIFT KARO AND JO INDEX PAR INSERT KARNA HAI VOH JAGAH KHAALI HOGI
    //length++

//DELETIONS
    //REMOVE THAT IDNEX ELEMENT N SHIFT EVERYTHING TO WARDS THE RIGHT
    //SHIFTING TOWARDS RIGHT USING FOR LOOP
    //EASYY

//LINEAR SEARCH
    //SHOULD BE UNIQUE ELEMENTS
    //SHOULD MAKE A FOR LOOP N COMPARE ALL ELEMENTS TO KEY
    //IMPROVING LINEAR SEARCH
    //WHAT IS ONCE MADE A KEY IT'LL BE MADE AGAIN MORE PROBABILITY
        //TRANSPOSITION
        //BAAR BAAR SAME ELEMENT WILL BE SEARCHED TO JUST MOVE THE KEY ELEMENT PAAS SO THAT
        //NEXT TIME SEARCH KARE TOH LESS COMPARISONS REQUIRED
        // MOVE TO HEAD
        //MOVE TO FORWARD/HEAD
        //ONCE A KEEY ELEMENT IS FOUND
        //SWAP IT WITH THE FIRST ELEMENT

//BINARY SEARCH
//CONDITION ELEMENTS SHOULD BE SORTED
    //MID=LOW+HIGH/2
    //CAN USE RECURSIVE CALLS FOR THE SAME TOO
    //JUST CHANGING THE PARAMETERS EACH TIME YOU DO IT
    //at most logn comparisons cz tree banega 
    //LOG N TIME COMPLEXITY
    //AVERAGE CASE ANALYSIS
        //ALSO LOG N

//GET OPERATION
//SET OPERATION
//MAX OPERATION
    //IF A[I] GREATER THAN MAX TOH KHATAM
//MIN OPERATION   
    //FOR LOOP CHALA KAR BAS COMPARE N KEEP REPLACING
//SUM
    //FOR LOOP CHALA KAR KEEP ON ADDING N ADDING

//REVERSING
    //MAKE NEW ARRAY
    //THEN COPY ALL ELEMENTS FROM THAT ARRAY
    //METHOD 2
        //SWAP TWO POINTERS LAGA KAR EK AAGE AUR EK PEECHE
        //TEMP VARIABLE BANA KAR

//LEFT SHIFT
    //FOR LOOP LAGAKAR A[I]=A[I+1]

//ROTATION
    //ROTATE BAS SIMPLE

//CHECKING IF ARRAY IS SORTED
    //INSERTING IN A SORTED ARRAY
    //START PEECHE SE
    //N KEEP SHIFTING RIGHT TILL ELEMENT IS LESS THAN KEY

//SORTED CHECK
    //IF A[I]>A[I+1]
    //RETURN FALSE

//GETTING -VE NOS. ON LEFT SIDE
//TWO WHILE LOOPS CHALAO 


//BINARY OPERATIONS ON AN ARRAY
//MERGING ARRAYS
    //TWO SORTED ARRAYS MAKE ANOTHER SORTED ARRAY
    //make 3 arrays
    //SABKE ZERO SE INITIALISE
    //compare a[i] w b[j] whatever smaller
    //copy it too c array

//SET OPERATIONS
    //UNION
    //COPY FIRST SET DIRECTLY
    //CHECK FOR DISTINCT IN 2 THEN ADD
    //INTERSECTION
    //COMMON ELEMENTS
    //SET DIFFERENCE
    //REMOVE COMMON ELEMENTS BETWEEN A N B FORM A

//SWITCH()
    //CASE 1:
    //AISE YOU MAKE CASES
    //N CAN MAKE A MENU PROGRAM
    //HARR CASE KE BAAD BREAK;

//AGAR BAS FUNC INITIALISED INSIDE CLASS JUST MAKE 
//USE SCOPE TO DEFINE FUNC OUTSIDE
//VOID CLASS::FUNC NAME(){}

//CREATE A DELETE[]A FUNC TOO

//TO MAKE A MENU DRIVEN FUNCTION DO IT INSIDE THE MAIN FUNCTION
//TEMPLATE <CLASS T>
//calling the class then
//array<float> arr(10)

     























#include <iostream>
#include <cmath>
using namespace std;
 class array{
     public:
     int size;
     int *x;
     int *y;
     int len;
     int length;
    void display(){
        for (int i=0;i<length;i++){
            cout<<x[i];
        }     
    }
    void insert(int index,int n){
        for(int i=length; i>index;i--){
            x[i]=x[i-1];
        }
        length++;
        x[index]=n;

    }
    void dlt(int r){
        for(int i=r;i<length-1;i++){
            x[i]=x[i+1];
        }
        length--;
    }
    void search(int key){
        for(int i=0;i<length;i++){
            if(x[i]==key){
                cout<<i;
            }
        }
    }
    void binary(int k){
        int low=0;
        int high=length-1;
        while(high>=low){
        
            int a=(low+high)/2;
            if(k==x[a]){
            cout<<a;
            break;
        }
        else if(k>x[a]){
            low=a+1;}
        else
        { high=a-1;}

    }
    }

    void reverse(){
        int temp;
        for (int i=0,j=length-1;i<=j;i++,j--){
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
        }
    }

    void insrt(int h){
        int i=length-1;
        while(x[i]>h){
                x[i+1]=x[i];
                i--;
            }
        x[i]=h;
        length++;
        }


    // void merge(){
    //     int r= length+4;
    //     int what[];
    //     int sly[5]={3,4,9,11,13};
    //     int i=0;
    //     int j=0;
    //     int k=0;
    //     while(x[i]<=sly[j],i<length && j<5){
    //         what[k]=x[i];
    //         k++;
    //         i++;
    //     }
    //     while(x[i]>=sly[j],i<length && j<5){
    //         what[k]=sly[j];
    //         j++;
    //         k++;
    //     }
    //}
        
    void intersection(){
        int s [10];
        for(int i=0; i<length;i++){
            for(int j=0;j<len;j++){
                if( x[i]==y[j]){
                for(int k=0;k<len+length;k++){
                    s[k]=x[i];
                }
            }
        }
    }
        for(int i=0;i<len+length-1;i++){
            cout<<s[i];
        }

    }
 };


 int main(){
    class array lol;
    cout<<"Enter size of the Array:"<<endl;
    cin>>lol.size;
    lol.x=new int [lol.size];
    cin>>lol.len;
    lol.y= new int[10];
    cout<<"Enter the length of the Array;"<<endl;
    cin>>lol.length;
     
    for(int i=0;i<lol.length;i++){
        cout<<"Enter element x["<<i<<"] of the array:";
        cin>>lol.x[i];
    }

    for(int i=0;i<lol.len;i++){
        cout<<"Enter element y["<<i<<"] of the array:";         
        cin>>lol.x[i];
    }

    //  lol.display();
    //  lol.insert(2,4);
    //  lol.display();
    //  lol.dlt(2);
    //  lol.display();
    //  lol.binary(5);
    //  lol.reverse();
    //  lol.display();
    //  lol.insrt(3);
    //  lol.display();
    // lol.merge();
    //FUCKED UP THE MERGE FUNCTION
    //lol.intersection();
    //FUCKED UP THE INTERSECTION FUNCTION






 }  
