#include <iostream>
#include<limits.h>
using namespace std;
int findMin(int arr[], int size)
{
    int minans = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minans)
        {
            minans=min(arr[i],minans); // this is also valid
            // minans = arr[i]; 

        }
    }
    return minans;
}
int main()
{
    int arr[9] = {11, 25, 36, 55,99,100,0,188,99};
    int size = 9;
    int ans = findMin(arr, size);
    cout << ans << " is the minimum among all";
    return 0;
}