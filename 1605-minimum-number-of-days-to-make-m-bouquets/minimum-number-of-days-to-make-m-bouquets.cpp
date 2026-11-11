class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
     if(bloomDay.size()<(long long)m*k){
        return -1;
     } 
     long long maxi=bloomDay[0];
     for(int i=0;i<bloomDay.size();i++){
        if(maxi<bloomDay[i]){
            maxi=bloomDay[i];
        }
     }
     long long ans;
     long long low=1,high=maxi;
     while(low<=high){
        long long mid=(low+high)/2;
        int flower=0,count=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                flower++;
                if(flower==k){
                    count++;
                    flower=0;
                }
            }else{
                flower=0;
            }
        }

        
        if(count>=m){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
     }
      return ans;
    }
};