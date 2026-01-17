#include <iostream>
#include <cmath>

int main () {

    double x = 3.142;
    double y = 4;
    double z;

    // z = std::max(y, x);
    // z = std::min(y,x);
    // z = pow(3, 2);
    // z = sqrt(37);
    // z = abs(-5);
    // z = round(x);
    // z = ceil(3.142);
    z = floor(3.9);

    std::cout << z;

    return 0;
}