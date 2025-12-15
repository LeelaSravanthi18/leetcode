class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        int even=0,odd=1;
        for(int x:nums)
        {
            if(x%2==0)
            {
                result[even]=x;
                even+=2;
            }
            else 
            {
                result[odd]=x;
                odd+=2;
            }
        }
        return result;
    }
};