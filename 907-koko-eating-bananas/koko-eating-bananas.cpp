class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = 0;

        for(int i=0; i<piles.size(); i++){
            if(piles[i] > high) high = piles[i];
        }

        int result = high;

        while(low <= high){
            int mid = low + (high-low)/2;

            long hours = 0;

            for(int i=0; i<piles.size(); i++){
                hours += (piles[i] + mid - 1) / mid;
            }

            if(hours <= h){
                result = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        return result;
    }
};