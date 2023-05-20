//Search in rotated sorted array

int pivot(vector<int>& arr, int n){
        int l,m,h;
        l=0;
        h=n-1;
        m=l+(h-l)/2;

        while(l<h){
            if(arr[m]>=arr[0]){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return l;
    }

    int bs(vector<int>& arr,int l,int h, int target){
        int m;
        m=l+(h-l)/2;

        while(l<=h){
            if(arr[m]==target){
                return m;
            }
            if(arr[m]>target){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return -1;

    }
    int search(vector<int>& nums, int target) {
        //find pivot first
        int n=nums.size();
        int x=pivot(nums,n);

        int res=-1;

        //now check 
        if(nums[x]<=target && nums[n-1]>=target){
            res=bs(nums,x,n-1,target);
        }

        else{
            res=bs(nums,0,x-1,target);
        }

        return res;
        
    }