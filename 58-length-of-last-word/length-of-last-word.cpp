class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int n = s.length();
        int start = 0;

        for(int i=n-1; i>=0; i--){
            if(s[i] != ' '){
                start = i;
                len += 1;
            }else if(s[i] == ' ' && i > start){
                continue;
            }else if(s[i] == ' ' && i < start){
                break;
            }
        }
        return len;
    }
};