//MATRICES

//DIAGONAL MATRIX, NO NEED TO STORE ZERO ELEMENTS
//for matrix M
//M[I][J]=0 IF I!=J

//ROW MAJOR MAPPING
//LOWER TRIANGULAR MATRIX
//i value is greater than or equal to tabhi non zero values
//N(N+1)/2 NON ZERO ELEMENTS
//TO ALLOCATE THE ARRAY SIZE WE NEED
//FILLING THE ELEMENTS IN THE ARRAY USING ROW MAJOR MAPPING
//FORMULA FOR ACCESSING A PARTICLUAR ELEMENT IN THE ARRAY
//IF INDEXING DONE FROM ONE IN THE MATRIX THEN
//IF ELEMENT 4,3
//(I)(I-1)/2+J-1


//N(N-1)/2 ZERO ELEMENTS


//COLUMN MAJOR MAPPING
//FILLING THE ELEMENTS IN THE ARRAY COLUMN WISE BASICALLY NOOBIE SHIT
//CDERIVE THE FORMULA FOR THE SAME
//IF HAVE TO ACCESS 4,3
//IF N IS THE SIZE OF THE MATRIX
//IF INDEXED STARTING FROM 1


//UPPER TRIANGULAR MATRIX
//SAB SAME AS LOWER TRAINGULAR BAS J INSTEAD OF I IN CONDITION
//N*N+1/2 NO. OF NON ZERO ELEMENTS SO YEH BHI SORTED
//ROW MAJOR OR COLUMN MAJOR
//DERIVE THE FORMULA N JUST FOLLLOW THE SAME PROCEDURE AS LOWER TRIANGULAR MATRIX

//I PERSONALLY FEEL THAT THE DERIVED FORMULA IS MUCH EASIER IN THE CASE OF ROW MAJOR MAPPING ALWAYS
//FOR UPPER TRIANGULAR COLUMN MAJOR MAPPED FORMULA IS SAME AS ROW MAJOR MAPPED FORMULA OF LOWER TRIANGULAR MATRIX
//BUT WHATSOEVER ITS ALWAYS EASIER TO JUST DERIVE IT N WORK ON IT
 
 //SYMMETRIX MATRIX
 //M[I][J]=M[J][I]
 
 //TRIDIAGONAL MATRIX
 //3 DIAGONALS
 //MAIN WALE KE EK UOAR EK NEECHE
 //CONDITION THAT CAN BE USED
 //I-J=0
 //I-J=1
 //I-J=-1
 //3N-2 ELEMENTS
 //FILL THE STORAGE ARRAY DIAGONAL WISE
 //SO EASY SHIT
 //CREATE A SEPARATE CONDIITON FOR EACH ARRAY N SORT THE STORAGE SHIT
 //THEN WHILE DISPALYING JUST CALL IT

 //SQUARE BAND MATRIX
 //MORE THAN ONE DIAGONALS ON EACH SIDE OF THE MAIN DIAGONAL


 //TOEPLITZ MATRIX
 //ALL NON ZERO ELEMENTS
 //ELEMENTS IN A DIAGONAL ARE ALWAYS THE SAME
 //MAPPING KARNE KA BHI APPROACH 
 //WHAT WE TAKE PEHLE ROW THEN COLUMN
 //THEN CREATE 
 //FORMULA FOR THE SAME
 //TO ACCESS ELEMENTS FOR THE MATRIX FROM THE ARRAY


 //WHEN MAKING MENU NEED TO DO IT LIKE THIS
 //SWITCH(X){
//      CASE X=1:
//BREAK;
//  }







//DIAGONAL MATRIX
//  #include <iostream>
//  using namespace std;

//  class matrix{
//      private:
//      int *c;
//      int u;
//     //CONSTRUCTOR
//     public:
//      matrix(){
//          int n;
//          n=2;
//          c=new int [n];
//      }

//      matrix(int l){
//      u=l; 
//      c= new int [l];
//      }

//      void set(int i, int j, int r){
//          if(i==j){
//            c[i]=r;  
//          }
//      }
//      int get(int i,int j){
//          if(i==j){
//              return c[i];
//          }
//          else{
//              return 0;
//          }
//      }
//      void display(){
//          int i;
//          int j;
//          for(i=0;j<u;j++){
//              for(j=0;j<u;j++){
//                  if(i==j){
//                      cout<<c[i]<<endl;
//                  }
//                  else{
//                      cout<<"0"<<endl;
//                  }
//              }
//          }
//      }
//  };
//  //agar func ko bahar define karna ho toh scope
//  //void matrix::set(int i, int j, int x){}
//  int main(){
//      class matrix x(5);
//      x.set(0,0,1);
//      x.set(1,1,1);
//      x.set(2,2,1);
//      x.set(3,3,1);
//      x.set(4,4,1);
//      x.display();
//     // delete []x.c;

//  }



//LOWER TRIANGLE MATRIX

// #include <iostream>
// using namespace std;

// class lower{
//     private:
//     int n;
//     int *m;
//     public:
//     int e;
//     lower(){
//         n=2;
//         m= new int [n];
//     }
//     lower(int r){
//         int z;
//         e=r;
//         z=r*(r+1)/2;
//         m=new int [z];
//     }
//     void set(int i, int j, int k){
//         if(i>=j){
//             //row major mapping
//             m[((i)*(i-1)/2)+j-1]=k;
//         }
//     }
//     int get(int i, int j){
//         if(i>=j){
//             return m[((i)*(i-1)/2)+j-1];
//         }
//         else{
//             return 0;
//         }
//     }
//     void display(){
//         for(int i=0;i<e;i++){
//             for(int j=0;j<e;j++){
//             if(i>=j){
//                 cout<<m[((i)*(i-1)/2)+j-1];
//             }
//             else{
//                 cout<<"0";
//             }
            
//             }
//             cout<<endl;
//         }
//     }


// };
// int main(){
//     cout<<"Enter dimensions of the array:";
//     int s;
//     cin>>s;
//     class lower t(s);
//     t.set(0,0,1);
//     t.set(1,0,1);
//     t.set(1,1,1);
//     t.set(2,0,1);
//     t.set(2,1,1);
//     t.set(2,2,1);
//     t.set(3,0,1);
//     t.set(3,1,1);
//     t.set(3,2,1);
//     t.set(3,3,1);
//     t.set(4,0,1);
//     t.set(4,1,1);
//     t.set(4,2,1);
//     t.set(4,3,1);
//     t.set(4,4,1);
//     t.display();


// }

