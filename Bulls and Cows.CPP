class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.length();
        int bull = 0, cow  = 0;
        map<char,int> mp;
        for(auto &ch:secret) mp[ch]++;
        for(int i = 0; i < n; i++){
            if(secret[i] == guess[i]){
                mp[secret[i]]--;
                bull++;
            }
        }
        for(int i = 0; i < n; i++){
            if(secret[i] != guess[i] && mp[guess[i]] > 0){
                mp[guess[i]]--;
                cow++;
            }
        }
        return to_string(bull) + "A" + to_string(cow) + "B";
    }
};