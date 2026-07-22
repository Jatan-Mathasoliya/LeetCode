class Solution {
public:
    bool check(vector<int>& nums) {

        int x = 0;
        int n = nums.size();

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                x++;
            }
        }

        if(x == 0) return true;
        else if(x == 1 && nums[0] >= nums[n-1]) return true;

        return false;
    }
};