int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    
    
    int ans=INT_MAX;
    int p1=0,p2=0,p3=0;
    while(p1<A.size() and p2<B.size() and p3<C.size())
    {
        ans=min(ans,max(abs(A[p1]-B[p2]),max(abs(B[p2]-C[p3]),abs(C[p3]-A[p1]))));
        if(A[p1]<=B[p2] and A[p1]<=C[p3])
        {
            p1++;
        }
        else if(B[p2]<=A[p1] and B[p2]<=C[p3])
        {
            p2++;
        }
        else
        {
            p3++;
        }
    }
    return ans;
    
}
