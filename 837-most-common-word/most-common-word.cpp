class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> freq;
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        string word = "";
        
        for(char c : paragraph){
            if(isalpha(c)){
                word += tolower(c);
            } else if(!word.empty()){
                freq[word]++;
                word = "";
            }
        }
        if(!word.empty()) freq[word]++; // last word

        int maxFreq = 0;
        string ans = "";
        for(auto &p : freq){
            if(p.second > maxFreq && bannedSet.count(p.first) == 0){
                maxFreq = p.second;
                ans = p.first;
            }
        }

        return ans;
    }
};
