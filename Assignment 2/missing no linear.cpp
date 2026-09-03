#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " sorted elements: ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        sum = sum + arr[i];
    }

    int missing = total - sum;

    cout << "Missing number = " << missing;

    return 0;
}
