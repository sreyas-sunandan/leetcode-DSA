class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evencount = 0;
        for (int i : nums) {
            int digicount = 0;
            while (i > 0) {
                i /= 10;
                digicount++;
            }
            if (digicount % 2 == 0) evencount++;
        }
        return evencount;
    }
};