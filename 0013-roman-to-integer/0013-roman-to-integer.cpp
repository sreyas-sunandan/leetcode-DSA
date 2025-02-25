class Solution {
public:
    int romanToInt(string s) {
        int no = 0;
        for (int i = 0; i <= s.length(); i++) {
           if( s[i] == 'M'){
          
            no += 1000;
        }
        if (s[i] == 'D') {
           no += 500;
        }
        if (s[i] == 'C') {
             if (s[i + 1] == 'M'||s[i + 1] == 'D'){
                no -= 100;
            }
           else no += 100;
        }
        if (s[i] == 'L') {
            no += 50;
        }
        if (s[i] == 'X') {
             if (s[i + 1] == 'C'||s[i + 1] == 'L'){
                no -= 10;
             }
            else no += 10;
        }
        if (s[i] == 'V') {
            no += 5;
        }
        if (s[i] == 'I') {
             if (s[i + 1] == 'X'||s[i + 1] == 'V'){
                no -= 1;
             }
            else no += 1;
        }
    }
    return no;
}
}
;