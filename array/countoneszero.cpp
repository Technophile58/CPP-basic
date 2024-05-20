#include <iostream>
using namespace std;
void countoneszero(int arr[], int size)
{
    int countzero = 0;
    int countone = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countzero++;
        }
        else
        {
            countone++;
        }
        
    }
    cout << "The number of ones  present in array is " << countone << endl;
        cout << "The number of zero  present in array is " << countzero << endl;
}
    int main()
    {
        int size;
        cout << "Enter the size of array :";
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the value of index " << i << " : ";
            cin >> arr[i];
        }
        cout<<"The values of array is :";
         for (int i = 0; i < size; i++)
        {
            cout << arr[i]<<" ";
            
        }
        cout<<endl;
        countoneszero(arr, size);
    }