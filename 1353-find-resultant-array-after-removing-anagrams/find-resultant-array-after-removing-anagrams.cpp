class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int i=1;
        while(i < words.size()){
            string w1 = words[i-1];
            string w2 = words[i];

            if(w1.size() == w2.size()){
                sort(w1.begin(), w1.end());
                sort(w2.begin(), w2.end());

                if(w1 == w2){
                    words.erase(words.begin()+i);
                    continue;
                }
            }
            i++;
        }
        return words;
    }
};