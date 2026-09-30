class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        vector<int> fre(26,0);
        for(int i=0;i<s.length();i++)
        {
            fre[s[i]-'a']++;
            fre[t[i]-'a']--;
        }
        for(int i=0; i<fre.size();i++)
        {
            if(fre[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};