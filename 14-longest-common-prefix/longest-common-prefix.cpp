class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();

        if (n == 0 || strs[0].length() == 0) return "";

        int maxToCheck = strs[0].length();
        int start = 0;
        string ans = "";

        for(int i=0; i<strs.size(); i++){
            if(strs[i].length() < maxToCheck){
                maxToCheck = strs[i].length();
            }
        }

        cout << "Max to check : " << maxToCheck << endl;

        while(start < maxToCheck){
            char initial = strs[0][start];

            cout << "Initial : " << initial << endl;

            int temp = 1;
            for(int i=1; i<n; i++){
                if(strs[i][start] == initial){
                    temp += 1;
                }
                else{
                    break;
                }
            }

            cout << "temp : " << temp << endl;

            if(temp == n){
                ans += strs[0][start];
            }else{
                break;
            }
            start++;
        }
        return ans;
    }
};