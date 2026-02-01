class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int i = 0;

        for (int num = 1; num <= n && i < target.size(); num++) {
            ans.push_back("Push");
            if (num == target[i]) {
                i++;
            } else {
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};
