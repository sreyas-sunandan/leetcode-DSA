class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int totalcandies = n;
        int i = 1;
        while (i < n) {
            if (ratings[i] == ratings[i - 1]) {
                i++;
                continue;
            }
            int currentpeak = 0;
            while (i < n && ratings[i] > ratings[i - 1]) {
                currentpeak++;
                totalcandies += currentpeak;
                i++;
            }
            if (i == n) return totalcandies;
            int currentdip = 0;
            while (i < n && ratings[i] < ratings[i - 1]) {
                currentdip++;
                totalcandies += currentdip;
                i++;
            }
            totalcandies -= min(currentpeak, currentdip);
        }
        return totalcandies;
    }
};