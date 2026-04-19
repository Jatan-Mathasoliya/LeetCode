class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num;

        for(int i=0; i<nums.size(); i++){
            int x = target - nums[i];
            if(num.find(x) != num.end()){
                return {i, num[x]};
            }
            else{
                num[nums[i]] = i;
            }
        }

        return {};
    }
};