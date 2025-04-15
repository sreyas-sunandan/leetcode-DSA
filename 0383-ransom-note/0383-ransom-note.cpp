class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magahash;
        for (char c : magazine) {
            magahash[c]++;
        }
        for (char c : ransomNote) {
            if (magahash[c] <= 0) {
                return false;
            }
            magahash[c]--;
        }
       return true;
    }
};