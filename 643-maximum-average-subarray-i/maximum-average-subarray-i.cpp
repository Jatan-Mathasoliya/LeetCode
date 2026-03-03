class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        int i = 0, j = k - 1;

        double sum = 0;

        for (int a = i; a <= j; a++) {
            sum += nums[a];
        }

        ans = sum / k;

        while (j < nums.size()-1) {

            sum += nums[j+1];
            sum -= nums[i];

            double temp = sum / k;

            ans = max(ans, temp);

            i++;
            j++;
        }
        return ans;
    }
};