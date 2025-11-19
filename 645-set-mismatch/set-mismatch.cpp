class Solution {
public:
    int sum(int n) {
        if (n == 0) {
            return n;
        }
        return n + sum(n - 1);
    }

    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;
        int temp = 0;
        int n = nums.size();

        int total = sum(n);

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            temp += nums[i];
        }

        int repeat = -1;

        for(auto f:freq){
            if(f.second > 1){
                repeat = f.first;
            }
        }

        int sumOfNo = temp - repeat;

        int missing = total - sumOfNo;

        ans.push_back(repeat);
        ans.push_back(missing);

        return ans;
    }
};