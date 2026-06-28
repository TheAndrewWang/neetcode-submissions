class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sums;

        for (int i = 0; i < nums.size(); i++) {
            int y = target - nums[i];
            if (sums.contains(y)) return {sums[y], i};
            sums[nums[i]] = i;
        }
        return {};
    }
};
