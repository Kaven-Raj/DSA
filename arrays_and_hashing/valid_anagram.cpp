#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }

        unordered_map<int, int> s_map;
        unordered_map<int, int> t_map;
        int len = s.length();

        for(int i = 0; i < len; i++) 
        {
            if(s_map.find(s[i]) != s_map.end())
            {
                s_map[s[i]]++;
            }else
            {
                s_map[s[i]] = 1;
            }

            if(t_map.find(t[i]) != t_map.end())
            {
                t_map[t[i]]++;
            }else
            {
                t_map[t[i]] = 1;
            }
        }

        for(auto c:s_map)
        {
            if(s_map[c.first] != t_map[c.first])
            {
                return false;
            }
        }
        return true;
    }
};
