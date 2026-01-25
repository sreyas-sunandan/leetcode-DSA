class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int flag = 0;
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 1) {
                flag++;
            }
            else {
                if(flag > count)
                    count = flag;
                    flag = 0;
            }
            
        }
        if(flag > count)
                    count = flag;
                    flag = 0;
        return count;
    }
};