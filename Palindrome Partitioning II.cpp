bool check_palindrome(int st,int en,string A)
{
    while(en>st)
    {
        if(A[en]!=A[st])
        {
            return false;
        }
        st++;
        en--;
    }
    return true;
}
int dpsol(int st,string A,int dp[1000])
{
    int k=1000;
    if(dp[st]!=-1)
    {
        return dp[st];
    }
    for(int i=st;i<A.size();i++)
    {
        if(check_palindrome(st,i,A) )
        {
            if(i==A.size()-1)
            {
                k=0;
                dp[st]=0;
                return 0;
            }
            else
            {
                 k=min(k,1+dpsol(i+1,A,dp));
            }
        }
    }
    dp[st]=k;
    return k;
}
int Solution::minCut(string A) {
    int dp[1000];
    for(int i=0;i<1000;i++)
    {
        dp[i]=-1;
    }
    return dpsol(0,A,dp);
}
