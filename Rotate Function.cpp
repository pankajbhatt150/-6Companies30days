class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
      int sum=accumulate(nums.begin(),nums.end(),0),curr=0,n=nums.size(),ans=0;
        for(int i=0;i<n;i++){
            curr+=(i*nums[i]); 
        }
        ans=curr; 
        for(int i=n-1;i>=0;i--){
            curr+=sum-(n*nums[i]);
            ans=max(curr,ans);
        }
        return ans;   
        
    }
};
