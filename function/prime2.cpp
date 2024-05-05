// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

// 1 to n print all prime numbers
bool checkPrime(int N)
{
    // we will check if N is prime or not
    if (N <= 1)
    {
        return false;
    }

    // check if N is divisible by any number b/w [2, N-1]
    for (int i = 2; i < N; i++)
    {
        if ((N % i) ==0)
        {
            // kya ye prime hoga? Noooooooooo
            return false;
        }
    }

    // agr main yaha aa gaya, means, N is not able to be divided by
    // any number b/w [2, N-1]
    return true;
}

int main()
{
    cout << "Enter n:" << endl;
    int n;
    cin >> n;

    // 0-> <n, 1-> <=n, dono me n times hi chaleg
    for (int i = 1; i <= n; i++)
    {
        // let's check if i is prime or not
        bool isPrime = checkPrime(i); // btao i prime hai ke nahi????????

        // if i is prime
        if (isPrime)
        {
            cout << "Prime: " << i << endl;
        }
        else
        {
            cout << "Non-Prime: " << i << endl;
        }
    }
    return 0;
}