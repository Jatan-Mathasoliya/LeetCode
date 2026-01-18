class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> indexes;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c)
                indexes.push_back(i);
        }

        vector<int> ans;
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            if (indexes.size() > 1) {
                if (indexes[j] >= i) {
                    ans.push_back(abs(indexes[j] - i));
                } else {
                    if (j+1 < indexes.size()) {
                        int next = j + 1;

                        int toCheck1 = abs(indexes[j] - i);
                        int toCheck2 = abs(indexes[next] - i);

                        if (toCheck1 <= toCheck2) {
                            ans.push_back(toCheck1);
                        } else {
                            ans.push_back(toCheck2);
                            j = next;
                        }
                    }else{
                        ans.push_back(abs(indexes[j] - i));
                    }
                }
            } else {
                ans.push_back(abs(indexes[j] - i));
            }
        }

        return ans;
    }
};