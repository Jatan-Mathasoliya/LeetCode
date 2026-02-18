class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        int pre = 2;
        int curr = 2;

        while(n > 0){
            curr = n % 2;

            if(curr == pre) return false;

            n = n/2;
            pre = curr;
        }

        return true;
    }
};