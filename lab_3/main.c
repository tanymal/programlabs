#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long long func(int n) //пошук відповіді на завдання
{
    long long dp0[n+1];
    long long dp1[n+1];

    dp0[1] = 2;
    dp1[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        dp0[i] = dp0[i-1] + dp1[i-1];
        dp1[i] = dp0[i-1];
    }

    return dp0[n] + dp1[n]; // повертаємо знайдений результат
}

int main()
{
    SetConsoleOutputCP(1251);
    int n;
    long long rez;
    printf("\nВведіть кількість розрядів: ");
    scanf("%d", &n); // вводимо вхідні дані

    rez = func(n); // функція пошуку результату

    printf("Кількість чисел з %d розрядами: %lld\n", n, rez); //виводимо результат

    return 0;
}
