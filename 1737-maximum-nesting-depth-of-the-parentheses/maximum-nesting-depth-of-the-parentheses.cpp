class Solution {
public:
    int maxDepth(string s) {
        int temp = 0;
        int ans = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                temp++;
            }else if(s[i] == ')'){
                if(i > 0){
                    ans = max(ans, temp);
                    temp--;
                }
            }
        }

        return ans;
    }
};