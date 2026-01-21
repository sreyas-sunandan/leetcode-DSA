class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        std::sort(nums.begin(), nums.end());
        int sum = 0;
        int count = 0;
        int n = nums.size();
        vector<int> answer(0);
        for(int i = 0; i < n - 1; i++) {
            sum += nums[i];
            count++;
            for(int k : queries) {
                if(sum < k) {
                    answer.push_back(count + 1);
                    break;
                }
                
            }
        }
        if(answer.empty())
            answer.push_back(0);
        return answer;
    }
};