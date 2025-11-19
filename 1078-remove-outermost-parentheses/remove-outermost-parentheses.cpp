class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int temp = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                if(temp > 0){
                    ans += s[i];
                }
                temp++;
            }else{
                temp--;
                if(temp > 0){
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};