class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int n = nums.size();
            int xorAll = 0, xorNums = 0;
    
            for (int i = 0; i <= n; i++) {
                xorAll ^= i;      // XOR of all numbers from 0 to n
            }
    
            for (int num : nums) {
                xorNums ^= num;   // XOR of all elements in the array
            }
    
            return xorAll ^ xorNums;  // The missing number
        }
    };
    