class Solution
{   
public:
    string smallestNumber(int sum, int D)
    {
       string ans="";    
       if(sum>D*9)
          return "-1";
       vector<int>vec(D,0);
       int ind=D-1;
       while(sum>9)
       {
           vec[ind]=9;
           sum=sum-9;
           ind--;
       }
       if(ind==0)
           vec[ind]=sum;
       if(ind>0)
       {
           vec[0]=1;
           vec[ind]=sum-1;
       }
       for(int i=0;i<D;i++)
          ans=ans+to_string(vec[i]);
       return ans;
    }
};
