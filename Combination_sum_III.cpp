class Solution {
public:
    void combination(int ind,int sum,int k,int n,vector<int>& temp,vector<vector<int>>& ans){
       
        if(sum==n && k==0){
            ans.push_back(temp);
            return;
        }
        if(sum>n){
            return;
        }
        for(int i=ind;i<=9;i++){
            if(i>n) break;
            temp.push_back(i);
            combination(i+1,sum+i,k-1,n,temp,ans);
            temp.pop_back();
                                }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        combination(1,0,k,n,temp,ans);
        return ans;
       
    }
};