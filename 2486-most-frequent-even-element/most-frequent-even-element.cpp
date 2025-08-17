class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>freq;
        for (int num : nums) {
            if (num % 2 == 0) {
                freq[num]++;
            }
        }
        if (freq.empty())
        {
           return -1;
        } 
        int maxFreq=0;
        int result=0;
        for(auto& pair:freq)
        {
            int num=pair.first;
            int count=pair.second;

            if(count>maxFreq || (count==maxFreq) && num<result)
            {
                maxFreq=count;
                result=num;
            }
        }
        return result;
    }
};