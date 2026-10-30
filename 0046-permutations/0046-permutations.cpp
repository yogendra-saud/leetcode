class Solution {
public:
 void per(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,vector<bool>&visited)
 {
    if(temp.size()==nums.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(visited[i]==0){
            visited[i]=1;
            temp.push_back(nums[i]);
             per(nums,temp,ans,visited);
             temp.pop_back();
             visited[i]=0;
        }
    }
 }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        vector<bool>visited(n,0);
        per(nums,temp,ans,visited);
        return ans;
    }
};