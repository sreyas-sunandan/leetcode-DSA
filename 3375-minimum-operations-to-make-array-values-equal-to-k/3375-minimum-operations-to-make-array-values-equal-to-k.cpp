class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        int i = 0;
        std::sort(nums.begin(), nums.end());
        if (nums[0] < k) {
            return -1;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > k) {
                count++;
                while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
                    i++;
                }
            }
        }
        
        return count;
    }
};
