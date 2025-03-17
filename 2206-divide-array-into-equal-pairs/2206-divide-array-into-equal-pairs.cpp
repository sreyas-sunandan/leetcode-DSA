class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        while ( i < nums.size() - 1) {
            int j = i + 1;
            while (j < nums.size() && nums[i] == nums[j]) {
                j++;
            }
            if ((j - i) % 2 != 0) return false;
            i = j;
        }

        return true;
    }
};