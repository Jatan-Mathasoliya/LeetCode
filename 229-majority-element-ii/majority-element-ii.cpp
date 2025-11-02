class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;
        int max = nums.size()/3;

        for(int n:nums){
            freq[n]++;
        }

        for(auto a:freq){
            if(a.second > max){
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};