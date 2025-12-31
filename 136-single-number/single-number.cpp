class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i:nums)
        {
            freq[i]++;
        }
        for(auto &mapp:freq)
        {
            if(mapp.second==1)
            {
                return mapp.first;
            }
        }
        return -1;
    }
};