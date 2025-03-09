class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n = nums.size();
            if (n <= 1) return n;  // Early exit for small arrays
    
            int index = 1;  // Tracks position for unique elements
            for (int i = 1; i < n; ++i) {
                if (nums[i] != nums[index - 1]) {
                    if (i != index) { // Avoid redundant writes
                        nums[index] = nums[i];
                    }
                    ++index;
                }
            }
            return index;
        }
    };
    