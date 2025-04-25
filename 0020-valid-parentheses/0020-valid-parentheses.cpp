class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> hash = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char c : s) {
            if ( hash.count(c)) {
                 if (!st.empty() && st.top() == hash[c]) {
                    st.pop();
                 }
                 else {
                    return false;
                 }
            }
            else {
                st.push(c);
            }
        }
        return st.empty();
    }
};