class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>result;
        for(int i=left;i<=right;i++)
        {
            if(isDivisible(i))
            {
                result.push_back(i);
            }
        }
        return result;
    }
   bool isDivisible(int x)
   {
    int num=x;
    while(num>0)
    {
        int digit=num%10;
        if(digit==0 ||x%digit !=0)
        {
            return false;
        }
        num=num/10;
    }
    return true;
   }
};