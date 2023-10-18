class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i=0;
        int j;
        for(j=0; j<t.length(); j++)
        {
            if(s[i] == t[j])
            {
                i++;
            }
        }
        if(i == s.length())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};