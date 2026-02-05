#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Brute force
int majorityElem(vector<int> nums){
    int n = nums.size();
    for(int val: nums){
        int freq = 0;
        for(int el: nums){
            if(el == val) {
                freq++;
            }
        }
        if(freq>n/2){
            return val;
        }
    }
    return -1;
};
//Optimize way
int majorityElement(vector<int> nums){
    int n=nums.size();
    //sort
    sort(nums.begin(), nums.end());
    
    //freq count
    int freq = 1, ans = nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }
        
        if(freq > n/2){
            return ans;
        }
    }
    return -1;
}


int main() {
vector<int> nums = {1,2,1,1,2};
cout << majorityElement(nums);
    return 0;
}