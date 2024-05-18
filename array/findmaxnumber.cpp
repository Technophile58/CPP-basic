#include <iostream>
#include<limits.h>
using namespace std;
int findMax(int arr[], int size)
{
    int maxans = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxans)
        {
            maxans=max(arr[i],maxans); // this is also valid
            // maxans = arr[i]; 

        }
    }
    return maxans;
}
int main()
{
    int arr[9] = {11, 25, 36, 55,99,100,66,188,99};
    int size = 9;
    int ans = findMax(arr, size);
    cout << ans << " is the maximum among all";
    return 0;
}