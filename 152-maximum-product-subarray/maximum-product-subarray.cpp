class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        int preffix = 1;
        int suffix = 1;

        for(int i=0; i<nums.size(); i++){
            preffix *= nums[i];
            ans = max(ans, preffix);

            if(preffix == 0){
                preffix = 1;
            }

            suffix *= nums[nums.size()-1-i];
            ans = max(ans, suffix);

            if(suffix == 0){
                suffix = 1;
            }

        }
        return ans;
    }
};