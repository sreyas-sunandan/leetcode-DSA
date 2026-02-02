class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> nums;
        for(string a : tokens) {
            if(a != "+" && a != "-" && a != "*" && a != "/") {
                nums.push_back(std::stoi(a));
            }
            else {
                int x = nums.back();  
                nums.pop_back();
                int y = nums.back();
                nums.pop_back();

                if(a == "+")  
                    nums.push_back(x + y);
                else if(a == "-") 
                    nums.push_back(y - x); 
                else if(a == "*") 
                    nums.push_back(x * y); 
                else
                    nums.push_back(y / x); 
            }
            
        }
        return nums[0];
    }
};