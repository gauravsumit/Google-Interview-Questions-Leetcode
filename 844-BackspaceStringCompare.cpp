class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s1,s2;
        for(char i:S)
        {
            if(i=='#' and s1.size()>0)
            {
                s1.pop();
            }
            else
            {
                s1.push(i);
            }
        }
        for(char i:T)
        {
            if(i=='#' and s2.size()>0)
            {
                s2.pop();
            }
            else
            {
                s2.push(i);
            }
        }
        bool flag=true;
        if(s1.size()==s2.size())
        {
            while(s1.size()>0)
            {
                if(s1.top()!=s2.top())
                {
                    flag=false;
                }
                s1.pop();
                s2.pop();
            }
        }
        else
        {
            flag=false;
        }
        return flag;
    }
};