class Solution {
public:
    int hIndex(vector<int>& citations) {
        float sum = 0;
        float avg = 0;
        int cit = 0;
        for (int i = 0; i < citations.size(); i++){
            sum += citations[i];
        }
        if (sum == 0) return 0;
        avg = sum / citations.size();
        if (sum == citations.size()) return avg;
         for (int i = 0; i < citations.size(); i++){
           if (citations[i] >= avg) cit++;
        }
        return cit;
    }
};