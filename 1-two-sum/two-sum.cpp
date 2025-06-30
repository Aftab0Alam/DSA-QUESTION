class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map; // A mapping to store numbers and their indices
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Find the required number to reach the target
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i}; // Return indices of the complement and current number
            }
            num_map[nums[i]] = i; // Store the number with its index
        }
        return {}; // This line is never reached due to the problem guarantee
    }
};