class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        int n = nums.size();
        int f0 = 0;
        for(int i=0;i<n;i++) f0 += i*nums[i];
        int ans = f0;
        int fn = f0;
        for(int i=1;i<n;i++){
            ans = max(ans,fn + sum - n*nums[n-i]);
            fn = fn + sum - n*nums[n-i];
        }
        return ans;
    }
};