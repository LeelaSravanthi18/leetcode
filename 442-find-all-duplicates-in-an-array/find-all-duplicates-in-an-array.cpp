class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int>duplicates;
        for(int i=0;i<nums.size();i++)
            {
                freq[nums[i]]++;
            }
        for(auto pair:freq)
            {
                if(pair.second>1)
                {
                    duplicates.push_back(pair.first);
                }
            }
        return duplicates;
    }
};