class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int>roman{
                {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
            };
            int prev = roman[s[s.size() - 1]];
            
            int ans = 0;
            for (int i = s.size() - 1; i >= 0; i--){
                int cur = roman[s[i]];
                if (prev <= cur){
                    ans += cur;
                }else{
                    ans -= cur;
                }
                prev = cur;
            };
            return ans;
        }
};