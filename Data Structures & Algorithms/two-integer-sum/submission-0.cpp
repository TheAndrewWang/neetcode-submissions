class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sums;
        vector<int> output;
        for (int i = 0; i < nums.size(); i++) {
            if (sums.find(nums[i]) != sums.end()) {
                output = {sums[nums[i]], i};
            }
            sums[target - nums[i]] = i;
        }
        return output;
    }
};
