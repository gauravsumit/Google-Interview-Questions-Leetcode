class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int la=num1.size()-1;
        int lb=num2.size()-1;
        int carry=0;
        while(lb>-1 and la>-1)
        {
            ans+=((num1[la]+num2[lb]-'0'-'0'+carry)%10+'0');
            carry=(num1[la]+num2[lb]-'0'-'0'+carry)/10;
            la--;
            lb--;
        }
        while(la>-1)
        {
            ans+=((num1[la]-'0'+carry)%10+'0');
            carry=(num1[la]-'0'+carry)/10;
            la--;
        }
        while(lb>-1)
        {
            ans+=((num2[lb]-'0'+carry)%10+'0');
            carry=(num2[lb]-'0'+carry)/10;
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
