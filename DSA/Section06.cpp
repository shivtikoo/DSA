//ARRAYS
//COLLECTION OF SAME DATA ELEMEMNTS
    //DECLARATION OF ARRAY
    //INITIALISATION INT A[4]
    //TAKES UP GARBAGE VALUES AISE^
    //INITIALISATION N DECLARATION
    //INT A[5]={1,2,3,4,5}
    //IF WE DO INT A[5]={2,3}
    //FOR ALL OTHER INDICES, DEFAULT VALUE WILL BE 0^^^
    //ACCESSING: A[2],2[A].*[A+2]
    //POINTER KE HELP SE WE CAN ALSO ACCESS

//STATIC N DYNAMIC ARRAYS
//BASED ON THEIR SIZES
//CPP MAI RUNTIME MAI SIZE DECLARE KAR SKATE HAIN BUT IN C HAVE TO DECLARE SIZE AT COMPILE TIME MATLAB WHILE WRITING CODE ITSELF..
//ACCESS USING POINTER IN HEAP
// #include <iostream>
// using namespace std;
// int main(){
//     int A[5];
//     int *p;
//     p=new int[5];
//     delete  []p;
// }

//SIZE OF ARRAY CANNOT BE CHANGED
//NOT IN STACK AT ALL, HEAP MAI FER BHI KUCH MODIFICATIONS CAN DO TO CHANGE SIZE

//INCREASING ARRAY SIZE
//CREATE A BIGGER ARRAY N TRANSFER ALL ELEMENTS PICHLE ARRAY SE
//COPY THE ELEMENTS USING FOR LOOP
//N DELETE PREVIOUS ARRAY
//SAB IN HEAP
//OLD ARRAY = NEW ARRAY
//NEW ARRAY = NULL;
//CANT INCREASE SIZE NORMALLY CZ ZAROORI NAHI KI CONSECUTIVE FREE SPACES HAI
// #include <iostream>
// using namespace std;

// int main(){
//     int *p;
//     int *q;
//     int a[5]={2,4,6,8,10};

//     p=new int[5];
//     p=a;

//     //now need to increase size
//     q= new int [8];
//     for (int i=0;i<5;i++){
//         q[i]=p[i];
//     }
//     delete []p;
//     p=q;
//     q=NULL;
//     for (int i=0;i<8;i++){
//         cout<<p[i];
//     }
// }

//2D ARRAYS
//LANG ALLOWS US TO DECLARE N DIMENSIONAL ARRAYS
//EVEN IF 2D ARRAY WITH ROWS N COLUMNS MEMORY IS ALLOCATED LINEARLY ONLY
//AGAR 3X4 KA ARRAY TOH EK ROW MAI 12 CONSECUTIVE PLACES GIVEN
//3 METHODS
//PURA IN STACK DECLARE NORMALLY INT a[3][4];
//HALF IN STACK HALF IN HEAP
    //INT *A[3];
    //A[0]=NEW INT[4];
    //A[1]=NEW INT[4]
//EVERYTHING IN HEAP
//DOUBLE POINTER
    //INT **A;
    //A=NEW INT *[3]
    //A[0]=NEW INT{4}

// #include <iostream>
// using namespace std;
// int main(){
//     int x[2][2]={{1,3},{2,4}};
//     int *y[2];
//     y[0]=new int[2];
//     y[1]=new int[2];
//     int **z;
//     z=new int *[2];
//     z[0]=new int[2];
//     z[1]=new int[2];

// }

//ARRAY REPRESENTATION BY COMPILER
//OBTAINS ADDRESS; USES BASE ADDRESS
//EVERYTHING CAN BE ACHIEVED USING THE BASE ADDRESS
//SO INDEXING IN CPP IS DONE FROM 0 CZ
//FORMULA FOR 0 HAS ONE OPERATION LESS THUS MORE EFFICIENT

//2D ARRAYS
//MEMORY ALLOCATED LINEARLY
    // ROW MAJOR MAPPING
        //ELEMENTS STORED LINEARLY ROW BY ROW
    // COLUMN MAJOR MAPPING
        //ELEMENTS STORED LINEARLY COLUMN AFTER COLUMN

//BASICALLY CREATE FORMULAS TO TELL LOCATION OF SOMETHING INAN ARRAY AT A CERTAIN INDEX USING THE BASE ADDRESS
//ROW MAJOR N COLUMN MAJOR EQUALLY EFFICIENT CZ SAME NO. OF OPERATIONS IN THE FORMULA 
//CPP USES ROW MAJOR MAPPING
//N^2 MULTIPLICATIONS FOR ALL FORMULAE GENERATED
//TAKING COMMON THE NO. OF MULTIPLICATIONS DECREASE TO THE ORDER OF N
//TAKING COMMON IS KNOWN AS HORNER'S RULE
//FOR ROW MAJOR LEFT TO RIGHT
//A(I,J,K)
//BASE =L
//A[M,N,R]=L+(M*J*K+N*K+R) ROW BASED
//A[M,N,R]=L+[R*J*I+N*I+M] COLUMN BASED

//TO ACCESS LOCATION IF BASE LOCATION IS GIVEN
// SAY HAVE TO ACCESS MATRIX MAI 2,3
// BASE LOCATION X
// *(*(X+2)+3)
//if instead of two stars only one star then i get address
//without star also address only
