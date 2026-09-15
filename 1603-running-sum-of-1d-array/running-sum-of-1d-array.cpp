class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        vector<int> runningSum;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i==0 ){
                sum=nums[i];
                runningSum.push_back(sum);
            }else{

            sum=nums[i]+nums[i-1];
            runningSum.push_back(sum);
            nums[i]=nums[i]+nums[i-1];
            }

        }
        return runningSum;
        
    }
};