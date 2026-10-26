class Solution {
public:
void parentheses(int n,int left,int right,vector<string>&ans,string temp)
 {
     if(left+right==2*n)
     {
        ans.push_back(temp);
        return;
     }
    if(left<n)
    {
        // temp.push_back('(');
        parentheses( n, left+1, right,ans,temp+'(');
       

    }
      if(left>right)
    {
        // temp.push_back(')');
        parentheses( n, left, right+1,ans,temp+')');
    }

 }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
         parentheses(n,0,0,ans,"");
         return ans;
        
    }
};