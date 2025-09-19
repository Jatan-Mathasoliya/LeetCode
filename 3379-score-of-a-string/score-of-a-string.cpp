class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        int a,b,c = 0;

        for(int i=0; i<s.length()-1; i++){
            a = s[i];
            b = s[i+1];

            if(a > b){
                c = a-b;
            }else {
                c = b-a;
            }

            ans += c;
        }
        return ans;
    }
};