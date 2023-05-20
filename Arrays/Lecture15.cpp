//binary search se search space mai traverse karke solution nikaala

//is possible function banao
    //mid value se compare karke  check if a possible suolution or not

//binary search karte jao

bool checker(vector<int>& arr, int m, int mid, int n){
    int count=1;
    int w=0;

    
    for(int i=0; i<=n ;i++){
        if(w+arr[i]<=mid){
            w+=arr[i];
        }

        else{
            count++;
            if(count>m || arr[i]>mid){
                return 0;
            }
            w=arr[i];
        }

    }

    if(count>m){
        return 0;
            }
        
    return 1;

}


int findPages(vector<int>& arr, int n, int m) {
    int sum=0;

    if(n<m){
        return -1;
    }
    
    //obtain search space
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }

    int l=0;
    int h=sum;
    int mid=l+(h-l)/2;
    int ans=-1;
    

    while(l<=h){
        bool x=checker(arr,m,mid,n);

        if(x){
            ans=mid;
            h=mid-1;
        }

        else{
            l=mid+1;  
        }

        mid=l+(h-l)/2;

    }

    return ans;


}