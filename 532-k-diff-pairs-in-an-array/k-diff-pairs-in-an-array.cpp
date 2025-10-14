class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int pair = 0;
        unordered_map<int, int> freq;

        if(k<0){
            return 0;
        }

        for(int n:nums){
            freq[n]++;
        }
        for(auto& [num, f] : freq){
            if(k==0){
                if(f>1){
                    pair += 1;
                }
            }else{
                if(freq.count(num+k)){
                    pair += 1;
                }
            }
        }
        return pair;
    }
};