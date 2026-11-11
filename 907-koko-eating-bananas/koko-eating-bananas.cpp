class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      int maxi=0;
        for(int i=0;i<piles.size();i++){
            if(maxi<piles[i]){
                maxi=piles[i];
            }
        }
      int low=1,high=maxi;
      int ans;
      while(low<=high){
        int mid=(low+high)/2;
        long long sum=0;
        for(int i=0;i<piles.size();i++){
            sum=sum+(piles[i]+mid-1)/mid;
        }
        if(sum<=h){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
      }
      return ans;  
    }
};