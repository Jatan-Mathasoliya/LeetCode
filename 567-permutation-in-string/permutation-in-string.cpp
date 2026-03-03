class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        unordered_map<char, int> s1Map;
        unordered_map<char, int> s2Map;

        for(char c : s1){
            s1Map[c]++;
        }

        int w_size = s1.length();

        for(int i=0; i<w_size; i++){
            s2Map[s2[i]]++;
        }

        if(s1Map == s2Map) return true;

        for(int i = w_size; i<s2.length(); i++){
            char right = s2[i];
            char left = s2[i - w_size];

            s2Map[right]++;

            s2Map[left]--;

            if(s2Map[left] == 0){
                s2Map.erase(left);
            }

            if(s1Map == s2Map) return true;
        }

        return false;
    }
};