class Solution {
public:
 void comb_Sum(vector<int>&nums,  vector<vector<int>>&ans,vector<int>temp,int n,int target,int idx)
 {
      if(target==0)
      {
          ans.push_back(temp);
          return;
        }
     if(target<0) return ;
     for(int i=idx;i<n;i++){
      temp.push_back(nums[i]);
      comb_Sum(nums,ans,temp,n,target-nums[i],i);
      temp.pop_back();
     
 }
 }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        comb_Sum(nums,ans,temp,n,target,0);
        return ans;
    }    
};