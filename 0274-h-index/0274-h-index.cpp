class Solution {
public:
    int hIndex(vector<int>& citations) {
        int papers = citations.size();
        vector<int> citbucket(papers + 1,0);
        for (int cit : citations){
            citbucket[min(cit,papers)]++;
        }
        int cumulative = 0;
         for (int i = papers; i >= 0; i--){
            cumulative += citbucket[i];
            if (cumulative >= i) return i;
        }
        return 0;
    }
};