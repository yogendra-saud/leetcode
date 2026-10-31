class Solution {
public:
    int strStr(string s, string s1) {
        int n=s.size();
        int m=s1.size();
        for(int i=0;i<n;i++)
        {
           if(s[i]==s1[0])
           {
                int x=1;
                int j=i+1;
                while(j<n && x<m)
                {
                    if(s[j]!=s1[x])
                    {
                        break;
                    }
                    j++;
                    x++;
                }
                if(x==m)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};