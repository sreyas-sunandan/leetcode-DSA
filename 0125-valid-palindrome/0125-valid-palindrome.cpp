#include <cctype> 
class Solution {
public:
    bool isPalindrome(string s) {
      string p, rp;
      for (int i = 0; i < s.length(); i++) {
        if(isupper(s[i])) {
            p += tolower(s[i]);
        }
        else if (!isalnum(s[i])) {
            continue;
        }
        else {
            p += s[i];
        }
      }
      rp = p;
      reverse(rp.begin(), rp.end());
      if (p == rp){ 
            return true;
        }
      else {
            return false;
        }
    }
};