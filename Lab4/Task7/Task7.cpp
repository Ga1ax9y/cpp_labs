#include <iostream>

using namespace std;

int main()
{
    double* arr = new double[1000];
    int n = 0, q = 0;
    while (cin >> n) {
        arr[q] = n;
        q++;
    }

    double min = 10000;
    double max = -10000;
    int indexmax = 0;
    int indexmin = 0;
    for (int i = 0; i < q; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            indexmin = i;
        }

    }
    for (int i = 0; i < q; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            indexmax = i;
        }

    }
    indexmin += 1;
    indexmax += 1;
    if (indexmax > indexmin)
        for (indexmin; indexmin < indexmax - 1; indexmin++)
            arr[indexmin] = 0;
    else
        for (indexmax; indexmax < indexmin - 1; indexmax++)
            arr[indexmax] = 0;
    std::cout << std::endl;
    int count = 0;
    bool zero = false;
    for (int i = 0; i < q; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    if (count > q / 2) {
        zero = true;
    }
    for (int j = 0; j < q; j++) {
        if (arr[j] == 0 && zero == true) {
            continue;
        }
        std::cout << arr[j] << " ";
    }
    delete[] arr;

    return 0;
}




