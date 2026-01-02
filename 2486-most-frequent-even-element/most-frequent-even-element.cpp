class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> freq;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 0){
                freq[nums[i]]++;
            }
        }

        int max_freq = INT_MIN;
        int ans = -1;

        for(auto f : freq){
            if(f.second > max_freq){
                max_freq = f.second;
                ans = f.first;
            }
        }

        return ans;
    }
};