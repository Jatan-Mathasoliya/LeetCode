class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long maxSum = 0;
        int neg = 0;
        int minAbs = INT_MAX;

        for(auto &row : matrix){
            for(int val : row){
                if(val < 0){
                    neg++;
                }
                int a = abs(val);

                maxSum += a;

                if(a < minAbs) minAbs = a;
            }
        }

        if(neg % 2 == 0) return maxSum;

        return maxSum - 2*minAbs;
    }
};