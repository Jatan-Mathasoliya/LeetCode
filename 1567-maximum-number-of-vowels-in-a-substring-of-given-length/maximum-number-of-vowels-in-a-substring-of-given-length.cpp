class Solution {
public:
    int maxVowels(string s, int k) {
        int ans = 0;

        int n = s.length();

        int cnt = 0;

        for (int j = 0; j < k; j++) {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' ||
                s[j] == 'u') {
                cnt++;
            }
        }

        ans = max(ans, cnt);

        int start = 0, end = k;
        while (end < n) {
            if (s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' ||
                s[start] == 'u') {
                cnt--;
            }

            if(s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u'){
                cnt++;
            }

            ans = max(ans, cnt);

            start++;
            end++;
        }

        return ans;
    }
};