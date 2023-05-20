//BRUTE FORCE

int findUnique(int *arr, int size)
{
    int i=0;
    while(i<size){
        int count=0;
        for(int j=0; j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            return arr[i];
        }
        i++;

    }
}

//OPTIMISED APPROACH