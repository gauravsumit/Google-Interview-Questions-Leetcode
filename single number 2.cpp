#include<bits/stdc++.h>
int Solution::singleNumber(const vector<int> &A) {
    
    vector<int> ar(70,0);
    for(int i:A)
    {
        bitset<64> temp=i;
        for(int i=0;i<64;i++)
        {
            if(temp[i]==1)
            {
                ar[i]++;
                ar[i]%=3;
            }
        }
    }
    int64_t ans=0;
    for(int i=0;i<64;i++)
    {
        if(ar[i]==1)
        {
            ans+=pow(2,i);
        }
    }
    return ans;
}
