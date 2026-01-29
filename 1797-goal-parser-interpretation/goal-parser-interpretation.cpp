class Solution {
public:
    string interpret(string command) {
        string ans = "";

        int n = command.length();

        int i = 0;

        while(i < n){
            if(command[i] == '(' && command[i+1] == ')' && i != n-1){
                ans += 'o';
                i += 2;
            }else if(command[i] == '(' && command[i+1] == 'a' && i != n-1){
                ans += 'a';
                ans += 'l';
                i+=4;
            }else{
                ans += 'G';
                i++;
            }
        }

        return ans;
    }
};