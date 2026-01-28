class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {

        if(nums.size() == 1 || nums.size() == 2) return -1;

        int min = INT_MAX;
        int max = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > max) max = nums[i];
            if(nums[i] < min) min = nums[i];
        }

        for(int i=0; i<3; i++){
            if(nums[i] != min && nums[i] != max) return nums[i];
        }

        return -1;
    }
};