class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n = nums.size();
     k = k % n;
     vector <int> rotate(n);
     for (int i = 0; i < n; i++){
        rotate[(i + k) % n] = nums[i];     
        }
     for (int i = 0; i < n; i++){
        nums[i] = rotate[i];
        }
    }
};