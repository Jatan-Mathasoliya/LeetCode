class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {

        // int ans = 0;

        // for (int i = 0; i < nums.size(); i++) {
        //     int sum = 0;
        //     sum += nums[i];

        //     if (sum == k) {
        //         ans += 1;
        //     }
        //     int temp = nums[i];

        //     for (int j = i + 1; j < nums.size(); j++) {
        //         temp += nums[j];

        //         if (temp == k) {
        //             ans += 1;
        //         }
        //     }
        // }
        // return ans;

        int n = arr.size(); // take the size of the array
        
        int prefix[n]; // make a prefix array to store prefix sum
        
        prefix[0] = arr[0]; // for element at index at zero, it is same
        
        // making our prefix array
        for(int i = 1; i < n; i++)
        {
            prefix[i] = arr[i] + prefix[i - 1];
        }
        
        unordered_map<int,int> mp; // declare an unordered map
        
        int ans = 0; // to store the number of our subarrays having sum as 'k'
        
        for(int i = 0; i < n; i++) // traverse from the prefix array
        {
            if(prefix[i] == k) // if it already becomes equal to k, then increment ans
                ans++;
            
            // now, as we discussed find whether (prefix[i] - k) present in map or not
            if(mp.find(prefix[i] - k) != mp.end())
            {
                ans += mp[prefix[i] - k]; // if yes, then add it our answer
            }
            
            mp[prefix[i]]++; // put prefix sum into our map
        }
        
        return ans; // and at last, return our answer
    }
};