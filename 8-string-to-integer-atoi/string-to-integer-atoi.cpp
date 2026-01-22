class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        if(n==0) return 0;

        int i=0;
        while(i < n && s[i] == ' '){
            i++;
        }

        int sign = 1;
        if(s[i] == '+'){
            sign = 1;
            i++;
        }else if(s[i] == '-'){
            sign = -1;
            i++;
        }

        long long ans = 0;
        cout << "i : " << i << endl;

        while(i < n && isdigit(s[i])){
            int num = s[i] - '0';

            cout << "num : " << num << endl;

            ans = ans*10 + num;

            if(ans*sign >= INT_MAX) return INT_MAX;
            if(ans*sign <= INT_MIN) return INT_MIN;
            i++;
        }

        return ans*sign;
    }
};