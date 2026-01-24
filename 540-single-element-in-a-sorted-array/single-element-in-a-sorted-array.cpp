class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;

        if(nums.size() == 1) return nums[0];

        while (i <= j) {
            int mid = (i + j) / 2;

            if (mid == 0 && nums[0] != nums[1]) {
                return nums[mid];
            }
            if (mid == nums.size() - 1 && nums[nums.size() - 1] != nums[nums.size() - 2]) {
                return nums[mid];
            }

            if (mid % 2 == 0) {
                if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                    return nums[mid];
                else if (nums[mid] == nums[mid - 1]) {
                    j = mid - 1;
                } else {
                    i = mid + 1;
                }
            } else {
                if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                    return nums[mid];
                else if (nums[mid] == nums[mid - 1]) {
                    i = mid+1;
                } else {
                    j = mid-1;
                }
            }
        }

        return -1;
    }
};