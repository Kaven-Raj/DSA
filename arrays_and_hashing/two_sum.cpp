#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int len = nums.size();

        for(int i = 0; i < len; i++) 
        {
            int diff = target - nums[i];
            if(map.find(diff) != map.end()) 
            {
                return {map[diff], i};
            }else 
            {
                map[nums[i]] = i;
            }
        }
        return {};  
    }
};