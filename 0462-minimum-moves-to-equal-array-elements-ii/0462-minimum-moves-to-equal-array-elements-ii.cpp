class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        sort(nums.begin(),nums.end());
        int mid=n/2;
        for(int i=0;i<n;i++){
            if(mid==i) continue;
            else{
                sum+=abs(nums[mid]-nums[i]);
            }
        }
        return sum;
        
    }
};