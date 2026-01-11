class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> freq;

        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }

        int temp = 0;
        for(string s : arr){
            if(freq[s] == 1){
                temp++;

                if(temp == k) return s;
            }
        }

        return "";
    }
};