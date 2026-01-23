class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);

        prefix[0] = 1;
        suffix[n-1] = 1;

        for(int i=1; i<nums.size(); i++){
            int pre = prefix[i-1] * nums[i-1];

            prefix[i] = pre;
        }

        for(int i=nums.size()-2; i>=0; i--){
            int suff = suffix[i+1] * nums[i+1];

            suffix[i] = suff;
        }

        for(int i=0; i<nums.size(); i++){
            nums[i] = prefix[i]*suffix[i];
        }

        return nums;
    
    }
};