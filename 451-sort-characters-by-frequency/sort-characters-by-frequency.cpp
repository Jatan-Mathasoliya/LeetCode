class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            freq[s[i]]++;
        }

        priority_queue<pair<int, char>> pq;

        for (auto& p : freq) {
            pq.push({p.second, p.first});
        }

        while (!pq.empty()) {
            for(int i=0; i<pq.top().first; i++){
                ans += pq.top().second;
            }

            pq.pop();
        }

        return ans;
    }
};