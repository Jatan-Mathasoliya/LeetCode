class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;

        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        int ans = -1;
        for(auto n:map){
            if(n.second > 1){
                ans = n.first;
                break;
            }
        }
        return ans;
    }
};