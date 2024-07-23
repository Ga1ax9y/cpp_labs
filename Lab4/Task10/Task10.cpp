#include <iostream>

using namespace std;

long long arr1[100], arr2[100], arr3[500];

long long smert()
{
    long long n, k;
    cin >> n;
    k = n - 1;
    if (n % 2 == 0)
        n /= 2;
    else k /= 2;
    for (int i = 0; n > 0; i++, n /= 10)
    {
        arr1[i] = n % 10;
    }
    for (int i = 0; k > 0; i++, k /= 10)
    {
        arr2[i] = k % 10;
    }
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            arr3[i + j] += arr1[i] * arr2[j];
        }
    }
    arr3[0]++;
    for (int i = 0; i < 50; i++)
    {
        arr3[i + 1] += arr3[i] / 10;
        arr3[i] %= 10;
    }
    bool x = false;
    for (int i = 100; i >= 0; i--)
    {
        if (arr3[i]) x = true;
        if (x) cout << arr3[i];
    }
    cout << '\n';
}

int main()
{
    long long n;
    n = smert();

    return 0;

}
