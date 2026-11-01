class Solution {
public:
    bool wordPattern(string p, string s) 
    {
        vector<string>v(26," ");
        int j=0;
        int n=p.length();
        int a=s.length();
        int l=1;
        for(int i=0;i<a;i++)
        {
            if(s[i]==' ')
            {
                l++;
            }
        }
        if(l!=n)
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            string k="";
            while(s[j]!=' ' && j<a )
            {
               k.push_back(s[j]);
               j++;
            }
            j++;
            if(v[p[i]-'a']==" ")
            {
                v[p[i]-'a']=k;
            }
            else
            {
                int x=p[i]-'a';
                for(int i=0;i<26;i++)
                {
                    if(i!=x && v[i]==k)
                    {
                        return false;
                    }
                }
                if(v[p[i]-'a']!=k)
                {
                    return false;
                }
            }
         }
            for(int i=0;i<26;i++)
            {
                    if(v[i]==" ")
                    {
                        continue;
                    }
                for(int j=0;j<26;j++)
                {
                    
                    if(i!=j && v[i]==v[j])
                    {
                        return false;
                    }
                }
            }
        return true;
        
    }
};