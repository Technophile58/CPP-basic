#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 50;
    int ans = linearSearch(arr, size, target);

    if (ans)
    {
        cout << target << " is in array";
    }
    else
    {
        cout << target << " is not in array";
    }
    return 0;
}