// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int st=1;
        int en=n;
        int ans=1;
        while(en>=st)
        {
            int mid= st + (en-st)/2;
            if(isBadVersion(mid))
            {
                ans=mid;
                en=mid-1;
            }
            else
            {
                st=mid+1;
            }
        }
        return ans;
    }
};