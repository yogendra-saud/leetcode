class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> >ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int> >unique;
        for(int i=0;i<n-2;i++)
        { 
            int target=-nums[i];
            int low=i+1;
            int high=n-1;
            while(low<high)
            {
                int sum=nums[low]+nums[high];
                if(sum==target)
                {
                     unique.insert({nums[i],nums[low],nums[high]});
                     high--;
                     low++;
                }
               else if(sum<target) low++;
                else high--;
            }

        }
        for(auto p:unique)
        {
            ans.push_back(p);
        }
        return ans;
    }
};