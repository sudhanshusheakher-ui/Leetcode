class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int ans;
      int sumi=0;
      for(int i=0;i<weights.size();i++){
       sumi+=weights[i];
      }
      int low=1,high=sumi;
      while(low<=high){
        int mid=(low+high)/2;
        int sum=0,daycount=1;
        for(int i=0;i<weights.size();i++){
            if(weights[i]>mid){
                daycount= days+1;
                break;
            }
         if(sum+weights[i]>mid) {  
            sum=weights[i];
            daycount++;
         }
         else{
            sum+=weights[i];
         }
        }
        if(daycount<=days){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }

      }
      return ans;
    }
};