class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        sort(arr.begin(), arr.end(), [](int a, int b) {

            int bitsA = __builtin_popcount(a);
            int bitsB = __builtin_popcount(b);

            if(bitsA == bitsB)
                return a < b;   // normal ascending order

            return bitsA < bitsB;  // fewer 1 bits first
        });

        return arr;
    }
};