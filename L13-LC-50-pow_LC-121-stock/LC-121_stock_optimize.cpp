#include <iostream>
using namespace std;

int stock(vector<int> &prices)
{
    int maxprofit = 0;
    int bestbuy = prices[0];

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > bestbuy)
        {
            maxprofit = max(maxprofit, prices[i] - bestbuy);
        }
        bestbuy = min(bestbuy, prices[i]);
    }

    return maxprofit;
}

int main()
{
    
    vector <int> vec = {1, 4, 3, 5, 6, 3, 6} ; 
    cout << stock(vec) ;

    return 0;
}
