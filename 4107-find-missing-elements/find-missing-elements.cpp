class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;
        int min = INT_MAX, max = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] < min) min = nums[i];

            if(nums[i] > max) max = nums[i];

            freq[nums[i]] = 1;
        }

        for(int i=min; i<=max; i++){
            if(freq.find(i) == freq.end()){
                ans.push_back(i);
            }
        }

        return ans;

    }
};