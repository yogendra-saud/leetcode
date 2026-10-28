class Solution {
public:
 void subsets(vector<int>nums,set<vector<int>>&st,vector<int>temp,int n,int idx)
  {
       if(idx==n){
         st.insert(temp);
         return;

       }   
        subsets(nums,st,temp,n,idx+1);
        temp.push_back(nums[idx]);
        subsets(nums,st,temp,n,idx+1); 
 }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>st;
        vector<int>temp;
        vector<vector<int>>ans;
        subsets(nums,st,temp,n,0);
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};