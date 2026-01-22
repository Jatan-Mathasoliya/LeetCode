class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0, j=s.length()-1;

        while(i < j){
            int c1 = s[i]; 
            int c2 = s[j];

            int c1Check = 0;
            int c2Check = 0;

            if(c1 > 64 && c1 < 123){
                if(c1 < 91 || c1 > 96){
                    c1Check = 1;
                }
            }
            if(c2 > 64 && c2 < 123){
                if(c2 < 91 || c2 > 96){
                    c2Check = 1;
                }
            }

            if(c1Check == 1 && c2Check == 1) {
                swap(s[i], s[j]);
                i++;
                j--;
            }else if(c1Check == 1 && c2Check == 0){
                j--;
            }else{
                i++;
            }

        }
        return s;
    }
};