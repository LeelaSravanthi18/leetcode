class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>freq;
        int sum=0;
            for(int i=0;i<nums.size();i++)
                {
                    int count=freq[nums[i]]++;
                }

            for(auto pair:freq)
                {
                    if(pair.second==1)
                    {
                        sum+=pair.first;
                    }
                }
        return sum;
    }
};