class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int, greater<int>>s;

        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }

        if(s.size() < 3) return *s.begin();

        for(int i=0; i<2; i++){
            s.erase(s.begin());
        }

        return *s.begin();
    }
};