class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int out = 0;
       for(int i = 0; i < gas.size(); i++){
        out += gas[i] - cost[i];
       } 
       if (out >= 0) return 3;
       return -1;
    }
};