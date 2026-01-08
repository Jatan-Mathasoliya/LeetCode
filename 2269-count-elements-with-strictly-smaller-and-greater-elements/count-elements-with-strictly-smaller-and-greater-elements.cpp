class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();
        int min = INT_MAX, max = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] < min) min = nums[i];

            if(nums[i] > max) max = nums[i];
        }

        int minCnt = 0, maxCnt = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == min) minCnt++; 
            else if(nums[i] == max) maxCnt++; 
        }

        return n - minCnt - maxCnt;
    }
};