class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        int i = 0;

        int cnt = 0;
        int temp = 0;

        for(int j=0; j<n; j++){
            if(nums[j] % 2 != 0){
                cnt++;
                temp = 0;
            }
            while(cnt == k){
                temp++;

                if(nums[i] % 2 != 0){
                    cnt--;
                }
                i++;
            }
            ans += temp;
        }

        return ans;
    }
};