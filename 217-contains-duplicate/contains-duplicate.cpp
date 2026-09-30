class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int n:nums){
            if(mpp.contains(n) && mpp[n]>=2){ 
           return true;
            }
        }
        return false;
    }
};