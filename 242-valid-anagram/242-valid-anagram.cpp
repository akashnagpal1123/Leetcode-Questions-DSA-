class Solution {
public:
    bool isAnagram(string s, string t)
        //Approach-1 with the help ofunordered maps
        
        
        //Approach-2 with sorting
        { 
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t; 
    }
};