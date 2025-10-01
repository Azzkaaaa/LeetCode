class Solution {
    public:
        int numWaterBottles(int numBottles, int numExchange) {
            int botolKosong = 0;
            int ans = 0;
            while(numBottles > 0){
                numBottles--;
                botolKosong++;
                ans++;
                if (botolKosong == numExchange){
                    botolKosong = 0;
                    numBottles++;
                }
            }

            return ans;
        }
};