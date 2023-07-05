#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    int n, kilk=0, i;

    printf("\nВведіть натуреальне число n: ");
    scanf ("%d", &n); // вводимо n

    for (i=1; i<=n; i++) // перебираючи, шукаємо результат
    {
        if (n/i==n%i)
        {
            kilk++;
        }
    }

    printf("Кількість рівних дільників числа %d: %d\n", n, kilk); // виводимо результат
    return 0;
}
