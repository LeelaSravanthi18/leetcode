class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums)
        {
            freq[num]++;
        }
        int majorityElement=INT_MIN;
        int result=0;
        for(auto& pair:freq)
        {
            int num=pair.first;
            int count=pair.second;
            if(count>majorityElement)
            {
                majorityElement=count;
                result=num;
            }
        }
        return result;
    }
};