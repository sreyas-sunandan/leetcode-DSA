class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string a ="" ,s;
       int j = 0;
            while (j<strs[0].size()){
                    for (int i = 0; i < strs.size(); i++){
                        if (strs[i][j] != strs[0][j]){
                        return a;
                        }
                    }
            a += strs[0][j]; 
            j++; 
            }
       return a;
    }
};