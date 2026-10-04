class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int k=0;
       int uniqueposition=1;
       for(int i=1;i<nums.size();i++){
           if(nums[i]!=nums[uniqueposition -1] ){
            nums[uniqueposition]=nums[i];
            uniqueposition++;
           }
       }
      return uniqueposition;
        
    }
};