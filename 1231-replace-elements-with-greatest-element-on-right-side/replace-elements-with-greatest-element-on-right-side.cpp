class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max = -1;

        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] > max) {
                int temp = max;
                max = arr[i];
                arr[i] = temp;
            } else {
                arr[i] = max;
            }
        }
        return arr;
    }
};