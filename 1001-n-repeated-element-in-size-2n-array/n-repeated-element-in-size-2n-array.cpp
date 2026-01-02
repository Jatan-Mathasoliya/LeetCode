class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int> freq;

        for(int i=0; i<len; i++){
            freq[nums[i]]++;
        }

        for(auto f : freq){
            if(f.second == len/2){
                return f.first;
            }
        }
        return -1;
    }
};