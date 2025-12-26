class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int temp = 0;

        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] == 1) {
                temp++;

                ans = max(temp, ans);
            }else{
                temp=0;
            }
        }

        return ans;
    }
};