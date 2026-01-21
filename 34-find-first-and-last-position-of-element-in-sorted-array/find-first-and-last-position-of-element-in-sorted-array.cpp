class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        int left = 0, right = nums.size()-1;
        int start= -1, end = -1;

        while(left <= right){
            int mid = (left + right) / 2;

            if(nums[mid] == target){
                start = mid;
                right = mid-1;
            }else if(nums[mid] < target){
                left = mid+1;
            }else{
                right = mid - 1;
            }
        }

        left = 0, right = nums.size()-1;

        while(left <= right){
            int mid = (left + right) / 2;

            if(nums[mid] == target){
                end = mid;
                left = mid+1;
            }else if(nums[mid] < target){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }

        ans.push_back(start);
        ans.push_back(end);

        return ans;
    }
};