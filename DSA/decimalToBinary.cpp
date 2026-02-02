#include <iostream>

int decimalToBinary(int number){
    int ans = 0;
    int pow = 1;

    while (number>0){
        int remainder = number%2;
        number /= 2;

        ans += remainder*pow;
        pow *= 10;

    }
    return ans;
}

int main(){

  for(int i =1; i<=10; i++){
    std::cout << decimalToBinary(i) << '\n';
  }
    return 0;
}