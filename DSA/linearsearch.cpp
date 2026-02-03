#include <iostream>

using namespace std;
int linearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            cout << target << " is at index: " << i;
            return i;
        }
    }
    return -1;
};

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = sizeof(arr) / sizeof(int);
    int target = 8;

    cout << linearSearch(arr, sz, target) << endl;

    return 0;
}