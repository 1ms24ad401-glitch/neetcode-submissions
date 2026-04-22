class Solution {
public:
    bool isAnagram(string s, string t) { 
        if(s.size() != t.size()) return false;

        for(int i = 0; i < s.size(); i++) {
            bool found = false;

            for(int j = 0; j < t.size(); j++) {
                if(s[i] == t[j]) {
                    t[j] = '#'; // mark as used
                    found = true;
                    break;
                }
            }

            if(!found) return false;
        }

        return true;
    }
};