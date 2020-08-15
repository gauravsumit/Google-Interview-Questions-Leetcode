class Solution {
public:
    int firstUniqChar(string s) {
        int ar[26];
        for(int i=0;i<26;i++)
        {
            ar[i]=0;
        }
        for(char i:s)
        {
            ar[i-'a']++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(ar[s[i]-'a']==1)
            {
                return i;
            }
        }
        return -1;
    }
};