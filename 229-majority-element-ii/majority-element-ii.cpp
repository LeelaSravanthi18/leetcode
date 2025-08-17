class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int,int>freq;
       for(int num:nums)
       {
        freq[num]++;
       }
       int maj=INT_MIN;
       vector<int>result;
       for(auto& pair:freq)
       {
        int num=pair.first;
        int count=pair.second;
        if(count>n/3)
        {
            maj=count;
            result.push_back(num);
        }
       }
         return result;
    }
};