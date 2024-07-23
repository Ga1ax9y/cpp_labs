

#include <iostream>
void Y(double* const arr);
void Fillarr(double* const arr); 
void showarr(const double* const arr);
double multi(const double* const arr1, const double* const arr2);
int check(int x, int min, int max)
{
    while (scanf_s("%d", &x) != 1 || x < min || x >max || getchar() != '\n')
    {
        printf("Ошибка!\n");
        rewind(stdin);
    }
    return x;
}
 
int main()
{
    int kk = 1;
    while (kk == 1)
    {
        setlocale(LC_ALL, "Russian");
        std::cout << " Задание 1\n";
        std::cout << "Составить программу для вычисления произведения одномерных динамических массивов(векторов) X = x1, x2, ..., xn и Y = y1, y2, ..., yn\n";
        std::cout << "Элементы вектора X = x1, x2, ... , xn ввести с клавиатуры, а элементы вектора Y вычислить по формуле yi = 0, 1tg(0, 1i), где i = 0, 1, ..., n, n = 10\n";
        std::cout << "Вывести на экран значение произведения и элементы вычисленного вектора Y\n";
        std::cout << "Выполнил Станишевский Александр (группа 253505)\n";
        int size = 10;
        double* arr = new double[size];
        std::cout << "Введите элементы вектора X: ";
        for (int i = 0; i < size; i++)
        {
            arr[i] = check(arr[i], -100000000, 100000000);

        }
        std::cout << std::endl;  
        double* arrY = new double[size];
        std::cout << " Массив (вектор) Y: \n";
        Y(arrY);
        showarr(arrY);
        std::cout << std::endl;
        std::cout << " Произведение массивов (векторов) равно ";
        std::cout << multi(arr, arrY) << "\n";

        delete[] arr;
        delete[] arrY;
        std::cout << " Хотите запустить программу еще раз? \n";
        std::cout << "  1 - да; 2 - нет\n";
        kk  = check(kk, 1, 2);
        
    }
}

