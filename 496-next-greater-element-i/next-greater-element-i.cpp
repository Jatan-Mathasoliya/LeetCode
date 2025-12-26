class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans;


        for(int i=0; i<m; i++){
            int number = nums1[i];
            int startIndex = 0;

            for(int j=0; j<n; j++){
                if(nums2[j] == number){
                    startIndex = j;
                    break;
                }
            }

            bool isGreater = false;

            for(int k=startIndex; k<n; k++){
                if(nums2[k] > number){
                    // cout << "What we are pushing : " << nums2[k] << endl;
                    ans.push_back(nums2[k]);
                    isGreater = true;
                    break;
                }
            }
            if(!isGreater){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};