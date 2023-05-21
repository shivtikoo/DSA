bool checker(vector <int> arr, int m, int k, int n){
    
    int count=1;
    int sum=arr[0];

    for(int i=0; i<n;i++){
        if(arr[i]-sum>=m){
            count++;
            if(count==k){
                return 1;
            }
            sum=arr[i];
        }
        
    }
    return 0;
}


int aggressiveCows(vector<int> &arr, int k)
{
    int n =arr.size();

    //search space
    sort(arr.begin(),arr.end());
    
    int l=0;
    int h=(arr[n-1]-arr[0]);
    int m=l+(h-l)/2;
    int res=-1;

    //search 
    while(l<=h){
        bool x = checker(arr, m, k,n);

        if(x){
            res=m;
            l=m+1; 
        }
        else{
            h=m-1;
        }

        m=l+(h-l)/2;
    }
    return res;

}