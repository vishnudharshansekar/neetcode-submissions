class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int> st(26,0);
        for(char c : s){
            st[c-'a']++;
        }
        for(char c : t){
            if(--st[c-'a']< 0){
                return false;
            }
        }
        return true;
    }
};
