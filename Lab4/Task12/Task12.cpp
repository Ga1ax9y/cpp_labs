#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, cols, rows, m, k;
    cin >> n;
    k = sqrt(n);
    m = n - k * k;
    if (m == 0)
    {
        rows = sqrt(n) - 1;
        cols = 0;
        cout << rows << " " << cols;
        return 0;
    }
    if ((m <= sqrt(n) + 1))
    {
        rows = sqrt(n);
        cols = n - powl(rows, 2) - 1;
        cout << cols << " " << rows;
        return 0;
    }
    else
    {
        cols = sqrt(n);
        rows = n - powl(cols, 2) - cols;
        cout << cols << " " << rows;
    }
    return 0;
}
