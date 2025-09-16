class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";

        for (char c : s) {
            if (isalnum(c)) {
                clean += tolower(c);
            }
        }

        if (clean.length() == 0) {
            return true;
        }

        int i = 0, j = clean.length() - 1;

        while (i < j) {
           

            if (clean[i] != clean[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};