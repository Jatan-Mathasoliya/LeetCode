class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if(k <= 1) return 0;

        int ans = 0;
        int left = 0, n = nums.size();
        long long temp = 1;

        for(int right=0; right<n; right++){
            temp *= nums[right];

            while(temp >= k){
                temp /= nums[left];
                left++;
            }

            ans += right-left+1;
        }

        return ans;
    }
};