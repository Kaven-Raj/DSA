#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i : nums)
        {
            if(map.count(i))
            {
                return true;
            }else
            {
                map[i] = 1;
            }
        }
        return false;
    }
};