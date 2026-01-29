class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans;

        for(int i=0; i<n; i++){
            int ind = nums[i];
            ans.push_back(nums[ind]);
        }

        return ans;
    }
};