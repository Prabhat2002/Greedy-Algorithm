class Solution
{
  public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        sort(a.begin(),a.end());
        long long ans=a[m-1]-a[0];
        for(int i=0;i<n-m;i++)
        {
            long long cur=a[m+i]-a[i+1];
            ans=min(ans,cur);
        }
        return ans;
    }   
};
