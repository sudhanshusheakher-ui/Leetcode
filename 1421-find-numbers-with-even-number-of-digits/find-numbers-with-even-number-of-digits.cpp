class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int n;
        int j=0;
        for(int i=0;i<nums.size();i++){
            n=nums[i];
            j=0;
            while(n>0){
                n/=10;
               j++;
            }
            if(j%2==0){
              
                count++;
            }
        }
      return count;  
    }
};