#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int func (int x, int y) // функція знаходження нск
{
    int nsk;
    nsk=x*y;
    while ((x!=0) && (y!=0))
    {
        if (x>y)
            x=x%y;
        else
            y=y%x;
    }
    nsk=nsk/(x+y);
    return nsk;
}

int main()
{
    SetConsoleOutputCP(1251);
    int i, n, N[1000], rez;
    printf ("\nВведіть кількість чисел : ");
    scanf ("%d", &n); // вводимо кількість елементів массиву

    printf ("Введіть масив: ");

    for (i=0; i<n;i++)
    {

        scanf ("%d", &N[i]); // вводимо елементи массиву
    }

    rez=N[0];

    for (i=1; i<n;i++) // знаходження спільного нск
    {
        rez= func(rez, N[i]);
    }

    printf ("НСК = %d\n", rez); // виведення результату

    return 0;
}
