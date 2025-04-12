#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, num;
    cin >> n;
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (largest < num)
        {
            largest = num;
        }
    }
    cout << "Largest number is: " << largest;
}