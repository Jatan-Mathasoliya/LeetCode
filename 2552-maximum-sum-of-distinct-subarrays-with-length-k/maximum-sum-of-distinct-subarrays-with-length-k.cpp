class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0;
        unordered_map<long long, long long> freq;

        long long sum = 0;
        long long dis = 0;

        for(int i=0; i<k; i++){
            sum += nums[i];
            freq[nums[i]]++;

            if(freq[nums[i]] == 1) dis++;
        }

        if(dis == k){
            ans = sum;
        }

        int start = 0;

        for(int end = k; end<nums.size(); end++){
            sum -= nums[start];
            freq[nums[start]]--;

            if(freq[nums[start]] == 0){
                dis--;
                freq.erase(nums[start]);
            }
            start++;

            sum += nums[end];
            freq[nums[end]]++;

            if(freq[nums[end]] == 1){
                dis++;
            }

            if(dis == k) ans = max(ans, sum);
        }

        return ans;

    }
};