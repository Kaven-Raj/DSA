#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i:nums) {
            map[i]++;
        }

        priority_queue<pair<int, int>> pq;
        for(pair<const int, int>& i:map) {
            pq.push({i.second, i.first});
        }

        vector<int> arr;
        for(int i = 0; i < k; i++)
        {
            arr.push_back(pq.top().second);
            pq.pop();
        }
        return arr;
    }
};