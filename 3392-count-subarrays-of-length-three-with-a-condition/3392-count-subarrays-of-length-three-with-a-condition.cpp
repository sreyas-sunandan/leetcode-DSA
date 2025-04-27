class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size() - 2; i++) {
            int x = nums[i];
            int y = nums[i + 1];
            int z = nums[i + 2];
            if (x + z == (double)y / 2) {
                count++;
            }
        }
        return count;
    }
};