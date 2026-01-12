class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        int unique = 0;

        for(auto f:freq){
            if(f.second >= 1) unique++;

            if(f.second > 2) return false;
        }

        int toCheck = nums.size() / 2; 
        if(unique >=  toCheck) return true;

        return false;
    }
};