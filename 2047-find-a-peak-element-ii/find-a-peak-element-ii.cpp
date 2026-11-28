class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int maxrow=0;
            for(int r=1;r<m;++r){
                if(mat[r][mid]>mat[maxrow][mid]){
                    maxrow=r;
                }
            }
            int curr=mat[maxrow][mid];
            int left=(mid>0)?mat[maxrow][mid-1]:-1;
            int right=(mid+1<n)?mat[maxrow][mid+1]:-1;
            if(curr>=left && curr>=right){
                return {maxrow,mid};
            }else if(left>curr){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};