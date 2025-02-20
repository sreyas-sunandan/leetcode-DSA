class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.size() - 1;
        int k = 0;
       bool b = true;
        while (b ==true){
            if (s[l] == ' ') --l;
            else b = false;
        }
        for (int i = l; i >= 0; i--){
            
            if (s[i] != ' ')k++;
          
            else break;
        }
        return k;
    }
};