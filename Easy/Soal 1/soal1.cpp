using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> idx; 
            for (int i = 0; i < (int)nums.size(); ++i) {
                int need = target - nums[i];
                auto it = idx.find(need);
                if (it != idx.end()) {
                    return {it->second, i}; 
                }
                
                idx[nums[i]] = i;
            }
            return {-1, -1}; 
        }
};
