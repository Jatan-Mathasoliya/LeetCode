class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 0;
        int a = 1;

        sort(nums.begin(), nums.end());

        while (i < nums.size()) {
            // int temp = a;
            // cout << "a before plus : " << a << endl;
            // cout << "i before check : " << i << endl;

            if (nums[i] == a) {
                a++;
            }
            // if (i == nums.size() - 1) {
            //     i = 0;
            // } else {
            // }
                i++;
            // cout << "a before if : " << a << endl;
            // if (temp == a) {
            //     break;
            // }
        }
        return a;
    }
};