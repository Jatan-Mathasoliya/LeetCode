class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        int temp = 0;
        while(i < t.length() && j < s.length()){
            if(t[i] == s[j]) {
                temp += 1;
                i++;
            }
            j++;
        }
        cout << "Temp : " << temp;

        if(temp == t.length()) {
            return 0;
        }
        else if(temp == 0){
            return t.length();
        }
        else return t.length() - temp;
    }
};