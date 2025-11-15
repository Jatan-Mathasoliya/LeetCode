class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ans = nums[0];

        for(int n:nums){
            if(count == 0){
                ans = n;
            }
            if(ans == n){
                count++;
            }else{
                count--;
            }
        }
        return ans;
    }
};