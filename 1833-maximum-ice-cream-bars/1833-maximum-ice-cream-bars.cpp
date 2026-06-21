class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
           vector<int> count(100001, 0);

        for (int cost : costs) {
            count[cost]++;
        }

        int ans = 0;

        for (int price = 1; price <= 100000; price++) {
            if (count[price] == 0) continue;

            int canBuy = min(count[price], coins / price);

            ans += canBuy;
            coins -= canBuy * price;

            if (coins < price) continue;
        }

        return ans;
    }
};