class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0; // Pointer to place the valid elements
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
