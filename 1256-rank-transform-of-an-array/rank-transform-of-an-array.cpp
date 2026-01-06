class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans;

        if(arr.size() == 0){
            return ans;
        }

        unordered_map<int, int> tomcat;

        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        
        int rank = 1;
        tomcat[temp[0]] = rank;

        for(int i=1; i<temp.size(); i++){
            if(temp[i] == temp[i-1]){
                tomcat[temp[i]] = rank;
            }else{
                rank++;
                tomcat[temp[i]] = rank;
            }
        }


        for(int i=0; i<arr.size(); i++){
            ans.push_back(tomcat[arr[i]]);
        }

        return ans;
    }
};