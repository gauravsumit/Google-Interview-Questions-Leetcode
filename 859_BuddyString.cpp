class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.length()==B.length())
        {
            vector<int> l;
            int ar[30];
            for(int i=0;i<28;i++)
            {
                ar[i]=0;
            }
            int maxx=0;
            for(int i=0;i<A.length();i++)
            {
                ar[A[i]-'a']++;
                maxx=max(maxx,ar[A[i]-'a']);
                
                if(A[i]!=B[i])
                {
                    l.push_back(A[i]);
                    l.push_back(B[i]);
                }
                if(l.size()>4)
                {
                    return false;
                }
            }
            if(l.size()==4)
            {
                if(l[0]==l[3] and l[1]==l[2])
                {
                    return true;
                }
                return false;
            }
            else if(l.size()==0)
            {
                if(maxx>1)
                {
                    return true;
                }
                return false;
            }
            return false;
        }
        else
        {
            return false;
        }
    }
};
