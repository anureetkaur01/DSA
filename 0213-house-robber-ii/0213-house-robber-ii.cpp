class Solution {
public:

    int fun(int start, int end, vector<int>& nums) {
        int prev = nums[start];
        int prev2 = 0;

        for(int i = start + 1; i <= end; i++) {
            int take = nums[i] + prev2;
            int notTake = prev;

            int cur = max(take, notTake);

            prev2 = prev;
            prev = cur;
        }

        return prev;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1)
            return nums[0];

        int case1 = fun(0, n - 2,nums);  // exclude last
        int case2 = fun(1, n - 1,nums);  // exclude first

        return max(case1, case2);
    }
};