class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        long temp = 0;
    
        for (int i = 0; i < n; i++) {
            temp = temp * 10 + digits[i];
        }

        temp += 1;  
        
        digits.clear(); 

        while (temp > 0) {
            digits.push_back(temp % 10);
            temp /= 10;
        }
        
        reverse(digits.begin(), digits.end());
        
        return digits;
    }
};
