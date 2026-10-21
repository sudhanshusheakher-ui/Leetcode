class Solution {
private:
    // Count reverse pairs between the left and right halves
    int countPairs(vector<int>& nums, int low, int mid, int high) {
        int count = 0;
        int right = mid + 1;
        
        for (int i = low; i <= mid; i++) {
            // Using 2LL to prevent integer overflow
            while (right <= high && nums[i] > 2LL * nums[right]) {
                right++;
            }
            count += (right - (mid + 1));
        }
        return count;
    }

    // Standard merge function to combine two sorted halves
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    int mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) return 0;
        int mid = low + (high - low) / 2;
        
        int count = 0;
        count += mergeSort(nums, low, mid);       // Sort left half
        count += mergeSort(nums, mid + 1, high);  // Sort right half
        
        // Count reverse pairs before merging
        count += countPairs(nums, low, mid, high); 
        
        // Merge the sorted halves
        merge(nums, low, mid, high);             
        
        return count;
    }

public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};
    