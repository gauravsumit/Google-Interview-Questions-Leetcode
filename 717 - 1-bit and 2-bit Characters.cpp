class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits)
    {
        bool flag=false;
        for(int i=0;i<bits.size();i++)
        {
            if(i==bits.size()-1)
            {
                flag=true;
            }
            if(bits[i]==1)
            {
                i+=1;
            }
        }
        return flag;
    }
};
