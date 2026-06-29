class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.size()!=t.size()) return false;
        
        for(char a:s){
            mp[a]++;
        }
        for(char b:t){
            mp[b]--;
        }
        for(auto a:mp){
            if(a.second!=0){
                return false;
            }
        }
        return true;
    }
};