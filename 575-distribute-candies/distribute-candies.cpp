class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int canEat = n/2;

        unordered_map<int, int> freq;

        for(int i=0; i<n; i++){
            freq[candyType[i]]++;
        }

        int unique = 0;

        for(auto a:freq){
            if(a.second >= 1){
                unique++;
            }
        }

        if(unique == canEat) return canEat;
        else if(unique > canEat) return canEat;
        else{
            return unique;
        }

        return 0;
    }
};