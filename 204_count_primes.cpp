class Solution {
public:
    int countPrimes(int n) {
        int ans=0;
        int ar[n+1];
        if(n>2)
        {
            ans++;
            for(int i=3;i<n;i+=2)
            {
                ar[i]=0;
            }
            for(int j=3;j<n;j+=2)
            {
                if(ar[j]==0)
                {
                    ans++;
                    for(int i=2*j;i<n;i+=j)
                    {
                        ar[i]=1;
                    }
                }
            }
        }
        return ans;
    }
};
