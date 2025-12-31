class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        unordered_map<int, int> hm1;

        for (int i = 0; i < nums1.size(); i++) {
            hm1[nums1[i]]++;
        }

        unordered_map<int, int> hm2;

        for (int i = 0; i < nums2.size(); i++) {
            hm2[nums2[i]]++;
        }

        for (auto& n : hm1) {
            auto it = hm2.find(n.first);
            if (it != hm2.end()) {
                int cnt = min(n.second, it->second);
                for (int i = 0; i < cnt; i++) {
                    ans.push_back(n.first);
                }
            }
        }

        return ans;
    }
};