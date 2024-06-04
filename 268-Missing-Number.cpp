class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();

        long long x = ((n*(n+1))/2) , y = 0;


        for(int i = 0 ; i < n ; i++){

            y += nums[i];
        }


        return (x - y);
    }
};