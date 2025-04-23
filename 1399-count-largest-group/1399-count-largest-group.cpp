class Solution {
public:
    int countLargestGroup(int n) {
        int freq[37] = {0}, maxf = 1, sz = 1;
        freq[1] = 1;
        for (int i = 2; i <= n; i++) {
            int digit_sum=0;
            for(int x=i;x>0; x/=10 )
                digit_sum += x%10;
            int f = ++freq[digit_sum];
            if (f == maxf) sz++;
            else if (f > maxf) maxf = f, sz=1;
        }
        return sz;
    }
};