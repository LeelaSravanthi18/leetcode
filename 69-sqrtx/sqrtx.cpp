class Solution {
public:
    int mySqrt(int x) {
        int ans;
        while(x>0)
        {
            ans=pow(x,0.5);
        }
        return ans;
    }
};