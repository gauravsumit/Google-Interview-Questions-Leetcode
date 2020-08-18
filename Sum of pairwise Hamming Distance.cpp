#include<bits/stdc++.h>
int Solution::hammingDistance(const vector<int> &A) {
    
    int mod = (int)1e9 + 7;
    int ans=0;
    vector<int> ar(50,0);
    for(int i:A)
    {
        bitset<32> num=i;
        for(int j=0;j<32;j++)
        {
            if(num[j]==1)
            {
                ar[j]++;
            }
        }
    }
    for(int i=0;i<32;i++)
    {
        int64_t temp=ar[i]*(A.size()-ar[i]);
        temp%=mod;
        ans+=temp;
        ans%=mod;
    }
    ans*=2;
    ans%=mod;
    return ans;
}
