class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int a = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                a += 1;
            } else {
                if (a > ans) {
                    ans = a;
                }
                a = 0;
            }
        }

        if (a > ans) {
            ans = a;
        }

        return ans;
    }
};