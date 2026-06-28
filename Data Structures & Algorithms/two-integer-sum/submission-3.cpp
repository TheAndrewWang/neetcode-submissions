class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sums;

        for (int i = 0; i < nums.size(); i++) {
            if (sums.contains(nums[i])) {
                return {sums[nums[i]], i};
            }
            sums.insert({target - nums[i], i});
        }
        return {};
    }
};
