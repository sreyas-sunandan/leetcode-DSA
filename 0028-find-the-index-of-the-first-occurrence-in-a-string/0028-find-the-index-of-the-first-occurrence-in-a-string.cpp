class Solution {
public:
    int strStr(string haystack, string needle) {
       int k = 0;
        int j ;
      for (int i = 0; i < haystack.size() - needle.size(); i++){
        k = i;
        for ( j = 0; j < needle.size(); j++){
            if ( haystack[i +j] != needle[j]) break;
            
        }
        if (j == needle.size()) break;
      }
      if (j == needle.size()) return k;
      else return -1;
    }
};