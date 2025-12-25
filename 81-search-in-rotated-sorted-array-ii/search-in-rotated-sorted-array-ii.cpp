class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        int n = nums.size();

        while(left <= right) {
            int mid = (right+left) / 2;

            cout << "mid : " << mid << endl;

            if(nums[mid] == target){
                return true;
                break;
            }
            
            if(nums[left] == nums[mid]){
                left++;
                continue;
            }
            else if(nums[left] <= nums[mid]){
                if(nums[left] <= target && target < nums[mid]){
                    right = mid-1;
                }else{
                    left = mid+1;
                }
            }else{
                if(nums[mid] < target && nums[right] >= target){
                    left = mid+1;
                }else{
                    right = mid-1;
                }
            }
        }
        return false;
    }
};