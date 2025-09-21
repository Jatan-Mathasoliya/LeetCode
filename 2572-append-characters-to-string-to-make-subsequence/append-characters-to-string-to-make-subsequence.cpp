class Solution {
public:
    int appendCharacters(string s, string t) {
        int i, j = 0;

        while(i < t.length() && j < s.length()) {
            if(t[i] == s[j]){
                i++;
            }
            j++;
        }
        if(i == 0) return t.length();

        else if(i == t.length()) return 0;

        else return t.length() - i;
    }
};