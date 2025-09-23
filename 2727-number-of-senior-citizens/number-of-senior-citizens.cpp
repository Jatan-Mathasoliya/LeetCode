class Solution {
public:
    int countSeniors(vector<string>& details) {
        int total = 0;
        
        for (int i = 0; i < details.size(); i++) {
            char c1 = details[i][11];
            char c2 = details[i][12];
            int age = 10 * (c1 - '0') + (c2 - '0');

            if (age > 60) {
                total += 1;
            }

        }
        return total;
    }
};