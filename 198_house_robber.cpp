
map<pair<int,bool>,int> dp;
int dpsol(int pos,bool last,vector<int> &nums)
{
    if(pos>=nums.size())
    {
        return 0;
    }
    if(dp.count(make_pair(pos,last))!=0)
    {
        return dp[make_pair(pos,last)];
    }
    int t1=dpsol(pos+1,true,nums);
    if(last==true)
    {
        t1=max(t1,dpsol(pos+1,false,nums)+nums[pos]);
    }
    return dp[make_pair(pos,last)]=t1;
}
class Solution {
public:
    int rob(vector<int>& nums) {
        dp.clear();
        return dpsol(0,true,nums);
    }
};
