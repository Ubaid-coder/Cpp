#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> prices = {7,1,6,3,4,5,3};
    
    int maxProfit = 0, bestBuy = prices[0];

    for(int i=1; i<prices.size(); i++){
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }

        bestBuy = min(bestBuy, prices[i]);
    }
    cout << maxProfit;
    return 0;
}