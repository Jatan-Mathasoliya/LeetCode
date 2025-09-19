class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<haystack.length(); i++){
            for(int j=i; j<haystack.length(); j++){
                if(haystack.substr(i, j-i+1) == needle){
                    return i;
                    break;
                }
            }
        }
        return -1;
    }
};