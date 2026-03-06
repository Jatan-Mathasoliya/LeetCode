class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int>ans(n, 0);

        int sum = 0, start, end;

        if(k == 0) return ans;
        else if(k > 0){
            for(int i = 1; i <= k; i++){
                sum += code[i%n];
            }

            for(int i=0; i<n; i++){
                ans[i] = sum;
                start = (i+1) % n;
                end = (i+1+k) % n;

                sum = (sum - code[start]) + code[end];
            }
        }
        else{
            k = abs(k);
            for(int i = n-k; i<n; i++){
                sum += code[i % n];
            }

            for(int i=0; i<n; i++){
                ans[i] = sum;
                start = (i+n-k) % n;
                end = i;

                sum = (sum - code[start]) + code[end];
            }
        }

        return ans;
    }
};