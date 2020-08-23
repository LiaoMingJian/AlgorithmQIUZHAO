class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int hash_s[26]={0};
        int hash_t[26]={0};
        for(auto i:s)
        {
            ++hash_s[i-'a'];
        }
        for(auto j:t)
        {
            ++hash_t[j-'a'];
        }
        for(int k=0;k<26;++k)
        {
            if(hash_s[k] != hash_t[k]) return false;
        }
        return true;
    }
};


