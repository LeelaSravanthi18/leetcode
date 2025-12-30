class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        int sum=0;
        int mn=INT_MAX,mx=INT_MIN;
        for (int x : salary) {
            sum += x;
            mn = min(mn, x);
            mx = max(mx, x);
        }
        return (double)(sum - mn - mx) / (n - 2);
    }
};