class Solution {
public:
    int reverse(int x) {
        long long t = x;             
        bool neg = t < 0;
        t = llabs(t);                

        string s = to_string(t);
        std::reverse(s.begin(), s.end());

        long long res = stoll(s);
        if (neg) res = -res;

        if (res > INT_MAX || res < INT_MIN)
            return 0;

        return (int)res;
    }
};
