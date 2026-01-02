class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> s;

        for(int i=0; i<stones.length(); i++){
            s[stones[i]]++;
        }

        int ans = 0;

        for(int i=0; i<jewels.length(); i++){
            if(s.find(jewels[i]) != s.end()){
                ans += s[jewels[i]];
            }
        }

        return ans;

    }
};