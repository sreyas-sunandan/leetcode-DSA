class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n;
       sort(nums.begin(),nums.end());
       n = nums.size();
       return nums[(n/2)];
    }
};