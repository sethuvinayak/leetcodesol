class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;     // total gas - total cost
        int tank = 0;      // current fuel in tank
        int start = 0;     // candidate start index

        for (int i = 0; i < gas.size(); i++) {
            total += gas[i] - cost[i];
            tank  += gas[i] - cost[i];

            if (tank < 0) {
                // can't reach station i+1, so restart from i+1
                start = i + 1;
                tank = 0;
            }
        }

        return total >= 0 ? start : -1;
    }
};
