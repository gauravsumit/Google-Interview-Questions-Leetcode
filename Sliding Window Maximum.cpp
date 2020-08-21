vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    
    deque<int> dq;
    for(int i=0;i<min((int)A.size(),B);i++)
    {
        while(!dq.empty() and A[dq.back()]<=A[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    vector<int> ans;
    ans.push_back(A[dq.front()]);
    for(int i=B;i<A.size();i++)
    {
        while(!dq.empty() and dq.front()<=i-B)
        {
            dq.pop_front();
        }
        while(!dq.empty() and A[dq.back()]<=A[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(A[dq.front()]);
    }
    return ans;
}
