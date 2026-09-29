class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> freqvec(501,0);
        for(int num : arr){
            freqvec[num]++;
        }
        int count=-1;
        for(int i=500;i>=1;i--){
            if(freqvec[i]==i){
              return i;  
            }
        }

        return count;
    }
};