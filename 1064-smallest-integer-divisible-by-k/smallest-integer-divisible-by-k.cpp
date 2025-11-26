class Solution {
public:
    int smallestRepunitDivByK(int k) {

        if(k % 2 == 0 || k % 5 == 0){
            return -1;
        }

        int ans = -1;
        long long temp = 0;
        int size = 1;

        for(int i=0; i<k; i++){
            temp = (temp*10 + 1) % k;
            if(temp == 0){
                ans = size;
                break;
            }
            size++;
        }
        return ans;
    }
};