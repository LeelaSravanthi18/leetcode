class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<0)
        {
            return false;
        }
        if(num==1)
        {
            return true;
        }
        int left=1,right=num/2,ans=0;
        while(left<=right)
        {
            long long mid=left+(right-left)/2;
            if(mid*mid==num)
            {
                return true;
            }
            else if(mid*mid<num)
            {
                ans=mid;
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return false;
    }
};