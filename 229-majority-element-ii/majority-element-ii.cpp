class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int,int> hm;
    vector<int> ans;
    int n=nums.size()/3;
    for(int i=0;i<nums.size();i++){
        hm[nums[i]]++;
    }  
    for(auto& it:hm){
        if(it.second>n){
            ans.push_back(it.first);
        }
    }  
    return ans;
    }
};