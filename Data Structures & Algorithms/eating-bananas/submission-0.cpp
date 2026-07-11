class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxBananas = 0;
        for (int i = 0; i < piles.size(); i++) {
            maxBananas = max(maxBananas, piles[i]);
        }

        int res;
        int low = 1; int high = maxBananas;
        while (low <= high) {
            int m = (high + low)/2;
            int time = 0;
            for (int b : piles) {
                time += ceil(static_cast<double>(b) / m);
            }
            if (time > h) {
                
                low = m + 1;
            } else {
                res = m;
                high = m - 1;
            }
        }
        return res;
    }
};
