class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int temp = 0;
        int ans = -1;

        for(int n:nums){
            freq[n]++;
        }

        for(auto a:freq){
            if(a.second > temp){
                temp = a.second;
                ans = a.first;
            }
        }
        return ans;
    }
};