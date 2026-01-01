// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans = 0;

        int start = 1, end = n;

        while(start <= end){
            int mid = start+(end-start) / 2;

            bool temp = isBadVersion(mid);

            if(temp == false){
                start = mid+1;
            }else{
                ans = mid;
                end = mid-1;
            }
        }

        return ans;
    }
};