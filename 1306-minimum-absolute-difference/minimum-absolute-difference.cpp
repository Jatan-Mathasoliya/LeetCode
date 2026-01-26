class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;

        if(arr.size() == 2){
            ans.push_back({arr[0], arr[1]});
            return ans;
        }

        sort(arr.begin(), arr.end());

        int min = INT_MAX;

        for(int i=0; i<arr.size()-1; i++){
            int j = i+1;

            int temp = abs(arr[i] - arr[j]);

            if(temp < min) min = temp;
        }


        for(int i=0; i<arr.size()-1; i++){
            int j = i+1;

            int temp = abs(arr[i] - arr[j]);

            if(temp == min){
                ans.push_back({arr[i], arr[j]});
            }
        }

        return ans;
    }
};