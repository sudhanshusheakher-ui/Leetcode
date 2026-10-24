class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         vector<int> temp;
        int i=0;
        int j=0;
      while(i<=m-1 && j<=n-1 && n!=0 && m!=0){
        if(nums1[i]<nums2[j]){
            temp.push_back(nums1[i]);
            i++;
        }else if(nums1[i]>nums2[j]){
            temp.push_back(nums2[j]);
            j++;
        }else if(nums1[i]==nums2[j]){
            temp.push_back(nums1[i]);
            i++;
        }
      } 
      
      while(i<=m-1 && m!=0){
        temp.push_back(nums1[i]);
        i++;
      } 
      while(j<=n-1 && n!=0){
        temp.push_back(nums2[j]);
        j++;
      }
       for(int i=0;i<temp.size();i++){
        nums1[i]=temp[i];
       }
    
    }
};