class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0, j = nums.size()-1;

        vector<int> ans;

        int start = -1, end = -1;
        while(i <= j){
            int mid = (i+j)/2;

            if(nums[mid] == target){
                start = mid;
                j = mid-1;
            }else if(nums[mid] > target){
                j = mid-1;
            }else{
                i = mid+1;
            }
        }

        i=0, j = nums.size()-1;
        
        while(i <= j){
            int mid = (i+j)/2;

            if(nums[mid] == target){
                end = mid;
                i = mid+1;
            }else if(nums[mid] < target){
                i = mid+1;
            }else{
                j = mid-1;
            }
        }

        ans.push_back(start);
        ans.push_back(end);

        return ans;
    }
};