#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {3,-4,5,4,-1,7,-8};
  int currSum =0, maxSum = INT_MIN;
  
    for(int val: nums){
        currSum += val;
        maxSum = max(currSum, maxSum);
            if(currSum < 0){
                currSum = 0;
        }
    }
    
    cout << maxSum;

    return 0;
}