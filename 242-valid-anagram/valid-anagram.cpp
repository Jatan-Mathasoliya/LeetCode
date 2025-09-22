class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> ans;
        for (char a : s) {
            ans[a]++;
        }
        for (char a : t) {
            ans[a]--;

            if(ans[a] < 0) {
                return false;
            }
        }
        return true;
    }
};