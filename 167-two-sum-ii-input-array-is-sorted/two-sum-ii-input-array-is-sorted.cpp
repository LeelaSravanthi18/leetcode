class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int index1=0,index2=n-1;
        while(index1<index2)
        {
            int sum=numbers[index1]+numbers[index2];
            if(sum==target)
            {
                return {index1+1,index2+1};
            }
            else if(sum>target)
            {
                index2--;
            }
            else
            {
                index1++;
            }
        }
        return {};
    }
};