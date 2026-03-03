class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if(p.length() > s.length()) return ans;

        unordered_map<char, int> pMap;
        unordered_map<char, int> sMap;

        for(char c : p){
            pMap[c]++;
        }

        int windowSize = p.length();

        for(int i=0; i<windowSize; i++){
            sMap[s[i]]++;
        }

        if(pMap == sMap){
            ans.push_back(0);
        }

        for(int i=windowSize; i<s.length(); i++){
            char right= s[i];
            char left = s[i - windowSize];

            sMap[right]++;

            sMap[left]--;
            if(sMap[left] == 0){
                sMap.erase(left);
            }

            if(sMap == pMap){
                ans.push_back(i - windowSize + 1);
            }
        }

        return ans;
    }
};