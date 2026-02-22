class Solution {
public:
    int getLucky(string s, int k) {
        string result="";
        for(char c:s)
        {
            int value=c-'a'+1;
            result+=to_string(value);
        }
        int i=result.length()-1;
        int sum=0;
        while(i>=0)
        {
            sum+=result[i]-'0';
            i--;
        }
        while(k>1)
        {
            int total_sum=0;
            while(sum>0)
            {
                total_sum+=sum%10;
                sum=sum/10;
            }
            sum=total_sum;
            k--;
        }
        return sum;
    }
};