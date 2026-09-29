class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        int count = -1;
        for(auto [key,val]:mpp){
        if(key==val){
        count = max(count,key);
        }
        }
        return count;
    }
};