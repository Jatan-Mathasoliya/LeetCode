class Solution {
public:

    bool isDivisable(int x){
        int num = x;

        while(num) {
            int temp = num % 10;

            if(temp == 0 || x % temp != 0){
                return false;
            }
            num /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for(int i=left; i<=right; i++){
            if(isDivisable(i)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};