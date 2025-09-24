class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int i = 0, j = i + 1;
        while (i < nums.size()) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
            if (j == nums.size() - 1) {
                i++;
                j = i + 1;
            } else {
                j++;
            }
        }
        return ans;
    }
};