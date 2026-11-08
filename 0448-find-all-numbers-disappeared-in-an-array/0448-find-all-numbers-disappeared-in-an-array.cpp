class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        vector<int>ans;
       for(int i=1;i<=n;i++)
       {
        if(!st.count(i))
        {
            ans.push_back(i);
        }
       }
       return ans;
    }
};