// author:  jacob curlin
// file:    lc/001.cpp
// date:    05/16/23

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pairs; 

        for (int i=0; i<nums.size(); i++)
        {
            if (pairs.find(nums[i]) != pairs.end()) {
                return {pairs[nums[i]], i};
            }
            else {
                pairs[target-nums[i]] = i; 
            }
        }
        return {};
    }
};