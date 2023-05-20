bool checker(vector<int> arr,int m, int k, int n){
    int count=1;
    int sum=0;

    for(int i=0; i<n;i++){
        if(sum+arr[i]<=m){
            sum+=arr[i];
        }

        else{
            count++;
            if(count>k || arr[i]>m){
                return 0;
            }
            sum=arr[i];
        }
    }
    return 1;
}



int findLargestMinDistance(vector<int> &arr, int k)
{
    int n=arr.size();

    //search space
    int sum=0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }

    int l=0; int h=sum;
    int m=l+(h-l)/2;
    int res=-1;

    //edge case
    if(n<k){
        return res;
    }

    while(l<=h){

        bool o=checker(arr, m, k, n);

        if(o){
            res=m;
            h=m-1;
        }

        else{
            l=m+1;
        }

        m=l+(h-l)/2;

    }

    return res;
}