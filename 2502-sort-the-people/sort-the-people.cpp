class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=0; i<heights.size(); i++){
            for(int j=i+1; j<heights.size(); j++){
                if(heights[i] < heights[j]){
                    string temp = names[j];
                    // names[j] = names[i];
                    // names[i] = temp;

                    // int temp1 = heights[j];
                    // heights[j] = heights[i];
                    // heights[i] = temp1; 

                    swap(names[i], names[j]);
                    swap(heights[i], heights[j]);

                }
            }
        }
        return names;
    }
};