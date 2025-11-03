class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;

        for(int n:nums){
            if(n > 0){
                pos.push_back(n);
            }else{
                neg.push_back(n);
            }
        }

        int p=1, n=0;

        nums[0] = pos[0];

        for(int i=1; i<nums.size(); i++){
            if(i % 2 == 0){
                nums[i] = pos[p];
                p++;
            }else{
                nums[i] = neg[n];
                n++;
            }
        }
        return nums;
    }
};