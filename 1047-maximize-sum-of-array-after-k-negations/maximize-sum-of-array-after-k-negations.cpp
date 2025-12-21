class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for (int i=0; i<n && k>0; i++) {
            if (nums[i] < 0) {
                nums[i] = -nums[i]; 
                k--;
            }
        }
        sort(nums.begin(), nums.end());
        if (k%2 != 0) {
            nums[0] = -nums[0];
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans+=nums[i];
        }
        return ans;
    }
};