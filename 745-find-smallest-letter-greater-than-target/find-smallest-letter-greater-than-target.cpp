class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int intTarget = target;
        for(int i=0; i < letters.size(); i++){
            int toCheck = letters[i];

            if(toCheck > intTarget){
                return letters[i];
            }
        }

        return letters[0];
    }
};