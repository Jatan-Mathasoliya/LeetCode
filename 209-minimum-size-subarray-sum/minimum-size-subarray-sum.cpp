class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX;

        int i = 0, j = 0;
        int temp = 0;

        while (j < nums.size()) {
            temp += nums[j];

            while (temp >= target && i <= j) {
                minLen = min(minLen, j - i + 1);
                temp = temp - nums[i];
                i++;
            }

            j++;
        }
        if(minLen == INT_MAX) return 0;
        else return minLen;
    }
};