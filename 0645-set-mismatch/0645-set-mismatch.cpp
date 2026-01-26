class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        int q = 0;
        std::sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++) {
            if(std::find(nums.begin(), nums.end(), i + 1) == nums.end()) {
                k = i + 1;
            }
        }
        for(int i = 0; i < n; i++) {
            if(i != n - 1 && nums[i] == nums[i + 1]) {
                q = nums[i];
                return {q, k};
            }
            else if(i == n - 1 && nums[i] == nums[i - 1]) {
                q = nums[i];
                return {k, q};
            }
        }
        return {0};
    }
};