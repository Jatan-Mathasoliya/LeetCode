class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>> ones;

        for(int i=0; i<arr.size(); i++){
            int cnt = 0;
            int n = arr[i];

            while(n > 0){
                if(n & 1){
                    cnt++;
                }

                n = n >> 1;
            }

            ones.push_back({cnt, arr[i]});
        }

        sort(ones.begin(), ones.end());

        for(int i=0; i<arr.size(); i++){
            arr[i] = ones[i].second;
        }

        return arr;
    }
};