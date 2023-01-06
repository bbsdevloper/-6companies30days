class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int mygcd = 0;
        for(auto i:numsDivide){
             mygcd=__gcd(mygcd,i);;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(mygcd%nums[i]==0) return i;
        }
        return -1;
    }
};