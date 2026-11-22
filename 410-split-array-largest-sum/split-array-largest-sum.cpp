class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int sum=0;
        int res;
        for(int i=0;i<=nums.size()-1;i++){
            sum+=nums[i];
        }
        int  battle =0;
        for(int i=0;i<=nums.size()-1;i++){
            if(battle<nums[i]){
                battle=nums[i];
            }
        }
    int low=battle,high=sum;
    while(low<=high){
        int mid=(low+high)/2;
        int sum1=0;
        int count=1;
        for(int i=0;i<=nums.size()-1;i++){
            if(sum1+nums[i]<=mid){
                sum1+=nums[i];
            }else{
                count++;
                sum1=nums[i];
            }
        }

       if(sum1<=mid && count<=k){
        res=mid;
        high=mid-1;
       }else{
        low=mid+1;
       }

    }  

   
   
    return res;
    }
};