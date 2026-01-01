class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size();

        int rem = 1;

        for(int i=n-1; i>=0; i--){
            int sum = digits[i] + rem;

            ans.push_back(sum % 10);

            rem = sum / 10;
        }

        if(rem){
            ans.push_back(rem);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};