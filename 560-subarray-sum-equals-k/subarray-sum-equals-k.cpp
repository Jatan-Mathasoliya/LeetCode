class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int ans = 0;

        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            sum += nums[i];

            if(sum == k) {
                ans += 1;
            }
                int temp = nums[i];

                for(int j=i+1; j<nums.size(); j++){
                    temp += nums[j];

                    if(temp == k){
                        ans += 1;
                    }
                }
        }
        return ans;
    }
};