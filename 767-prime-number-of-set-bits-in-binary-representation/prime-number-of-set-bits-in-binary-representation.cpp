class Solution {
public:

    bool helper(int n){
        vector<int> prime = {2,3,5,7,11,13,17,19};
        int setBits = 0;
        while(n > 0){
            int lastDig = n & 1;

            if(lastDig == 1) setBits++;

            n = n >> 1;
        }

        for(int i=0; i<prime.size(); i++){
            if(setBits == prime[i]) return true;
        }

        return false;
    }

    int countPrimeSetBits(int left, int right) {

        int ans = 0;

        for(int i=left; i<=right; i++){
            bool temp = helper(i);

            if(temp == true) ans++;
        }

        return ans;
    }
};