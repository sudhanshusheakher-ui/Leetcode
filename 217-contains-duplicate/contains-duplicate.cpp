class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mpp;
        for(int n:nums){
            if(mpp.contains(n)){
             return true;
            }
            mpp.insert(n);
                
        }
        return false;
    }
};