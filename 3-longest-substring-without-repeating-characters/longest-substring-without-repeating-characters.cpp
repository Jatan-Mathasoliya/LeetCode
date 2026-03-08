class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_map<char, int> freq;

        int left = 0;
        for(int right = 0; right < s.length(); right++){
            char add = s[right];

            freq[add]++;

            while(freq[add] > 1){
                char remove = s[left];
                freq[remove]--;
                left++;
            }

            ans = max(ans, right-left+1);
        }

        return ans;

    }
};