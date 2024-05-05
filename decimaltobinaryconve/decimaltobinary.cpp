#include <iostream>
#include <cmath>
using namespace std;

int decimaltoBinary(int n)
{
   int binaryno = 0;
    int i = 0;

    // by bitwise operator
    while (n != 0)
    {
        int bit = (n & 1);
        binaryno = bit * pow(10, i++) + binaryno; // formula used for reversing any number
        n = n >> 1;
    }
  return binaryno;
  }
int main()
{
    int n;
    cout << "Enter the number in decimal :";
    cin >> n;
    int binary = decimaltoBinary(n);
    cout << "Binary of " << n << " is :" << binary << endl;
    return 0;
}
