class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.length();
        int m = word2.length();

        int end = n;
        int i=0;

        if(m > n) end = m;

        while(i < end){
            if(i < n) ans += word1[i];
            if(i < m) ans += word2[i];

            i++;
        }

        return ans;
    }
};