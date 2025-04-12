#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num == 1)
        return false;
    if (num != 2 && num % 2 == 0)
        return false;
    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}