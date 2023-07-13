#include <bits/stdc++.h> 
class NStack
{
public:
    // Initialize your data structure.
    int *arr;
    int*top;
    int*next;

    int n,s;

    int freespot;

    
    
    
    
    
    //APPROACH 
    //DIVIDE THE ARRAY INTO K PARTS
    //THE ARRAY IS OF N LENGTH ANS THERE ARE K STACKS
    //NOT A SPACE OPTIMISED APPROACH


    //REAL APPROACH
    //SIZE OF STACK
    //SIZE OF ARRAY
    //NO. OF QUERIES
        //MAKE TOP ARRAY WHICH STORES TOP OF STACK
        //MAKE NEXT ARRAY WHICH STORES NEXT OF STACK
        //FREESPOT TO ACCESS THE NEXT ARRAY

        //PUSH(10,1)
            //FIND INDEX INDEX=FREESPOT
            //FREESPOT PAR JAO
            //FREESPOT UPDATION= NEXT[INDEX]
            //INSERT ARR[INDEX]=X;
            //UPDATE NEXT MEXT[INDEX]=TOP[M-1]
            //UPDATE TOP TOP[M-1]=INDEX


        

    
    
    
    
    NStack(int N, int S)
    {
        // Write your code here.
        n=N;
        s=S;

        arr=new int[s];
        top=new int[n];
        next=new int[s];

        for(int i=0;i<n;i++){
            top[i]=-1;
        }

        for(int i=0;i<s;i++){
            next[i]=i+1;
        }

        next[s-1]=-1;

        freespot=0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        if(freespot==-1){
            return false;
        }

        //find index
        int index=freespot;
        //update freespot
        freespot=next[index];
        //insert
        arr[index]=x;
        //update next
        next[index]=top[m-1];
        //update top
        top[m-1]=index;

        return true;

    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {   
        //check underflow
        if(top[m-1]==-1){
            return -1;
        }
        // Write your code here.
        int index=top[m-1];
        //loose the value
        //update top
        top[m-1]=next[index];
        //update next
        next[index]=freespot;

        freespot=index;

        return arr[index];

    }
};