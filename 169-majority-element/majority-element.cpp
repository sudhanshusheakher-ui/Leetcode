class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int,int> h;
        int count=0;
        int j=0;
     for(int i=0;i<nums.size();i++){
            h[nums[i]]++;
            if(h[nums[i]]>(nums.size()/2)){
                j=nums[i];
                return j;
            
        }
        
        }
        return -1;
        
    }
};