class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pairs;

        for(int i=0; i<nums.size(); i++){
            if(pairs.find(target-nums[i]) != pairs.end()){
                return {i, pairs[target-nums[i]]};
            }
            pairs[nums[i]] = i;
        }
        return {};
    }
};