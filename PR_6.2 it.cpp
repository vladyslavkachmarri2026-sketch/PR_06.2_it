// Лабораторна робота № 6.2, варіант 12 (ітераційний спосіб)
// Завдання: написати функцію, яка шукає індекси найбільшого
// та найменшого елементів одновимірного масиву a із n елементів цілого типу.

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

// формування масиву випадковими числами з діапазону [Low; High]
void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

// виведення елементів масиву в рядок
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

// пошук індексу найбільшого елемента (першого входження)
int IndexOfMax(int* a, const int size)
{
    int imax = 0; // початкове значення - з наявних елементів масиву
    for (int i = 1; i < size; i++)
        if (a[i] > a[imax])    // якщо поточний елемент більший за найбільший знайдений
            imax = i;          // то запам'ятовуємо його індекс як новий найбільший
    return imax;
}

// пошук індексу найменшого елемента (першого входження)
int IndexOfMin(int* a, const int size)
{
    int imin = 0;
    for (int i = 1; i < size; i++)
        if (a[i] < a[imin])   // якщо поточний елемент менший за найменший знайдений
            imin = i;         // то запам'ятовуємо його індекс як новий найменший
    return imin;
}

int main()
{
    srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел

    const int n = 25;
    int a[n];
    const int Low = 5;
    const int High = 90;

    Create(a, n, Low, High);
    cout << "Array:" << endl;
    Print(a, n);

    int imax = IndexOfMax(a, n);
    int imin = IndexOfMin(a, n);

    cout << "Index of max element: " << imax
        << " (value " << a[imax] << ")" << endl;
    cout << "Index of min element:  " << imin
        << " (value " << a[imin] << ")" << endl;

    return 0;
}