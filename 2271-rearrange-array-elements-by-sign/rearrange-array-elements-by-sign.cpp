class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=0;
        int k=nums.size();
        vector<int> arr(k);
        int l=1;
        for(int i=0;i<nums.size();i++){
            int a= nums[i];
            if(a>0){
                arr[n]=a;
                n+=2;
            }else if(a<0){
                arr[l]=a;
                l+=2;
            }

        }
        return arr;
    }
};