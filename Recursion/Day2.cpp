#include <iostream> 
using namespace std;

void reach(int src, int dest){
        if(src==dest){
            cout<<"reached home";
        }
        

        reach(src+1,dest);
        
    }

int main(){

    


    int dest=10;
    int src=1;

    reach(src, dest);








}