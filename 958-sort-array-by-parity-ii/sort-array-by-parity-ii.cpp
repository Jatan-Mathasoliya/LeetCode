class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int i=0, j = nums.size()-1;

        while(i < n-1 && j > 0){
            if(nums[i] % 2 != 0){
                if(nums[j] % 2 == 0){
                    swap(nums[i], nums[j]);
                    i += 2;
                    j -= 2;
                }else{
                    j -= 2;
                }
            }else{
                i += 2;
            }
        }

        return nums;
    }
};