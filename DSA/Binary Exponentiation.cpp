#include <iostream>
using namespace std;

int binaryExponentition(int x, int n);

int main()
{

    cout << binaryExponentition(2,15);
    return 0;
}

int binaryExponentition(int x, int n)
{
    long binForm = n;
    long double ans = 1;

    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }

    while (binForm > 0)
    {

        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}
