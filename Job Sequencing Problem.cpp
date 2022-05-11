class Solution 
{
    public:
    static bool comp(Job a,Job b)
    {
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        int job=0,profit=0;
        vector<bool>task(n,false);
        //sort from high profit to low profit.
        sort(arr,arr+n,comp);
        for(int i=0;i<n;i++)
        {
            for(int j=min(n,arr[i].dead-1);j>=0;j--)
            {
                if(task[j]==false)
                {
                    job++;
                    profit+=arr[i].profit;
                    task[j]=true;
                    break;
                }
            }
        }
        return {job,profit};
    } 
};
