class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        map<int,int>mp;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[grid[i][j]]++;
                sum+=grid[i][j];

            }

        }
     vector<int>ans;
        for(auto p:mp){
            if(p.second==2)
            {
                ans.push_back(p.first);
                break;
            }
             
        }
      int y=((n*n)*(n*n+1)/2)-(sum-ans[0]);
      ans.push_back(y);
        return ans;
    }
};