class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long maxSum = 0, minSum = 0;

        int count = 0;

        while(count < k){
            minSum += nums[count];
            maxSum += nums[n-1-count];

            count++;
        }

        return abs(maxSum - minSum);

    }
};