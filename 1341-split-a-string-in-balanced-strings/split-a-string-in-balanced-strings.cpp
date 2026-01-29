class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int r_cnt = 0;
        int l_cnt = 0;

        for(int i=0; i <= s.length(); i++){
            if(r_cnt == l_cnt && r_cnt != 0){
                cout << "here both are same so plus ans" << endl;
                cout << "i : " << i << endl;
                ans++;
                r_cnt = 0;
                l_cnt = 0;
            }

            if(s[i] == 'R' && i<s.length()) r_cnt++;
            else l_cnt++;
        }

        return ans;
    }
};