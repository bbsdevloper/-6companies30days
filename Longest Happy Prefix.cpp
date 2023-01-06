class Solution {
public:
void printv(vector <int> a) {for(int i=0; i < a.size(); i++) cout << a[i] << ' '; cout<<endl;}

    string longestPrefix(string s) {
        int n = s.length();
        vector<int> pi(n,0);
        int j = 0;
        for(int i=1;i<n;i++){
            while(j>0 && s[i]!=s[j]){
                    j = pi[j-1];
            }
            if(s[i] == s[j]) j++;
            pi[i] = j;
            
            
        }
        // printv(pi);
        return s.substr(0,pi[n-1]);
    }
};