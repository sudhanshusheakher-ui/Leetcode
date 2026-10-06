class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int n;
        for(int i=0;i<nums.size();i++){
        int j=0;

            while(nums[i]>0){
                nums[i]/=10;
                j++;
            }
            if(j%2==0){
                count++;
            }
        }
            
      return count;  
    }
};