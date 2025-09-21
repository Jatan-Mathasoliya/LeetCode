class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        if (arr.size() == 1) {
            arr[0] = -1;
        }

        for (int i = 0; i < arr.size(); i++) {
            if (i == arr.size() - 1) {
                arr[i] = -1;
            } else {
                int max = arr[i + 1];
                for (int j = i + 1; j < arr.size(); j++) {
                    if (arr[j] > max) {
                        max = arr[j];
                    }
                }
                arr[i] = max;
            }
        }
        return arr;
    }
};