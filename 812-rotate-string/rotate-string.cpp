class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();

        if(n != m) return false;

        for(int i=0; i<n; i++){
            char temp = s[0];
            for(int j=1; j<n; j++) {
                s[j-1] = s[j];
            }
            s[n-1] = temp;

            if(s == goal){
                return true;
            }
        }
        return false;
    }
};