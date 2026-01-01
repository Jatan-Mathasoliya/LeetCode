class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num == 1) return true;

        int start = 2, end = num / 2;

        while(start <= end){
            long long mid = start + (end-start) / 2;

            if(mid * mid == num){
                return true;
            }else if(mid * mid > num){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }

        return false;
    }
};