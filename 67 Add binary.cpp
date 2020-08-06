class Solution {
public:
    string addBinary(string a, string b) {
        int la=a.length()-1;
        int lb=b.length()-1;
        int carry=0;
        string ans="";
        while(la>-1 and lb>-1)
        {
            ans+=((a[la]+b[lb]+carry-'0'-'0')%2 + '0');
            carry=(a[la]+b[lb]+carry-'0'-'0')/2;
            la--;
            lb--;
            //cout<<"1\n";
        }
        while(la>-1)
        {
            ans+=((a[la]+carry-'0')%2+'0');
            carry=(a[la]+carry-'0')/2;
            la--;
            //cout<<2<<"\n";
        }
        while(lb>-1)
        {
            ans+=((b[lb]+carry-'0')%2 + '0');
            carry=(b[lb]+carry-'0')/2;
            lb--;
        }
        if(carry)
        {
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
