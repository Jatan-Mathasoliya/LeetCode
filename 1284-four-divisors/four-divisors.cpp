class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;

        for(int i=0; i<nums.size(); i++){
            int sum = 1 + nums[i];
            int temp = 2;

            int end = sqrt(nums[i]);

            for(int j=2; j <= end; j++){
                if(nums[i] % j == 0){

                    int other = nums[i] / j;

                    if(j == other){
                        temp += 1;
                        sum += j;
                    }else{
                        temp += 2;
                        sum = sum + j + other;
                    }
                }

                if(temp > 4) break;
            }

            if(temp == 4){
                ans += sum;
            }

        }
        return ans;
    }
};