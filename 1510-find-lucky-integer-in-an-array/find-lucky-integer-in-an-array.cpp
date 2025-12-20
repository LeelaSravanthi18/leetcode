class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        int n=arr.size();
        int largest=-1;
        for(int i=0;i<n;i++)
        {
             freq[arr[i]]++;
        }

        for(auto it:freq)
        {
            if(it.first==it.second)
            {
                largest = max(largest,it.first);
            }
        }
         return largest;
    }
};