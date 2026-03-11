class Solution {
public:
    string minWindow(string s, string t) {

        if (s.length() < t.length())
            return "";

        unordered_map<char, int> maps;
        unordered_map<char, int> mapt;

        int unique = 0, need = 0, left = 0, len = INT_MAX;
        int start = 0, end = 0;
        string ans = "";

        for (char c : t) {
            mapt[c]++;

            if (mapt[c] == 1) {
                unique++;
            }
        }

        for (int right = 0; right < s.length(); right++) {
            char curr = s[right];

            maps[curr]++;

            if (mapt[curr] == maps[curr]) {
                need++;
            }

            while (need == unique) {

                int temp = right - left + 1;

                if (temp < len) {
                    len = temp;
                    start = left;
                }

                char rem = s[left];
                maps[rem]--;

                if (maps[rem] < mapt[rem]) {
                    need--;
                }
                left++;
            }
        }

        if(len == INT_MAX) return "";

        return s.substr(start, len);
    }
};