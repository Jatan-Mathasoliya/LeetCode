class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pairs;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            int c = target - nums[i];
            if(pairs.find(c) != pairs.end()){
                ans.push_back(pairs[c]);
                ans.push_back(i);
            }
            pairs[nums[i]] = i;
        }
        return ans;
    }
};