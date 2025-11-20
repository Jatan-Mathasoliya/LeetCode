class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;
        int n = nums.size();

        for(int i=1; i<=n; i++){
            freq[i]++;
        }

        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }

        for(auto f:freq){
            if(f.second == 1){
                ans.push_back(f.first);
            }
        }

        return ans;
    }
};