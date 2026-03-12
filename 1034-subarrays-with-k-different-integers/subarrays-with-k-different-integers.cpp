class Solution {
public:

    int countAtMostK(vector<int>& nums, int k){
        unordered_map<int, int> freq;
        int left = 0, cnt = 0;

        for(int right=0; right<nums.size(); right++){
            freq[nums[right]]++;

            while(freq.size() > k){
                freq[nums[left]]--;

                if(freq[nums[left]] == 0){
                    freq.erase(nums[left]);
                }

                left++;
            }

            cnt += right-left+1;
        }

        return cnt;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int ans = countAtMostK(nums, k) - countAtMostK(nums, k-1);

        return ans;
    }
};