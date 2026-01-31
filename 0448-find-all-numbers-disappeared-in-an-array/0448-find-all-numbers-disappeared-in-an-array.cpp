class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans(0);
        int i = 0;
        bool flag = true;
        std::sort(nums.begin(), nums.end());
        while(i < nums.size()) {
            flag = true;
            for(int a = i; a < nums.size(); a++){
                if(nums[a] == i + 1){
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans.push_back(i + 1);
            }
            i++;
        }
        return ans;
    }
};