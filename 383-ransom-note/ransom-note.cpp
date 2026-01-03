class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq1;
        unordered_map<char, int> freq2;
        int temp = 0;
        for(int i=0; i<ransomNote.length(); i++){
            freq1[ransomNote[i]]++;
        }
        for(int i=0; i<magazine.length(); i++){
            freq2[magazine[i]]++;
        }


        for(int i=0; i<ransomNote.length(); i++){
            if(freq2.find(magazine[i]) == freq1.end()) return false;
            else {
                if (freq1[ransomNote[i]] <= freq2[ransomNote[i]]){
                    temp++;
                }
            }
        }

        if(temp == ransomNote.length()) return true;

        return false;
    }
};