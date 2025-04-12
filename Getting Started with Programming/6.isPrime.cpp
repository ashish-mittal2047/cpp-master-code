#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num == 1)
        return 0;
    if (num != 2 && num % 2 == 0)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin >> num;
    if (isPrime(num))
    {
        cout << "Number is prime!";
    }
    else
    {
        cout << "Number is not prime!";
    }
}