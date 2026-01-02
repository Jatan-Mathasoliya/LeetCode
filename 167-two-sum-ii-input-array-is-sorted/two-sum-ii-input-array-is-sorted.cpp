class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();

        for(int i=0; i<n; i++){
            int num = numbers[i];
            int toFind = target-num;

            int start = i+1, end = n-1;

            while(start <= end){
                int mid = start + (end-start)/2;

                if(numbers[mid] == toFind){
                    ans.push_back(i+1);
                    ans.push_back(mid+1);
                    break;
                }else if(numbers[mid] > toFind){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }
        }

        return ans;
    }
};