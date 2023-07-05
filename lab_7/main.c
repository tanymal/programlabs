#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    int x1, y1, r1, x2, y2 ,r2, rez=0;
    float d;

    printf("Введіть координати центрів та радіуси \n");
    scanf ("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2 ,&r2); //вводимо дані

    d=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));

    if (d==0) // якщо відстань між точками 0
    {
        if (r1==r2)
            rez=-1;
        else
            rez=0;
    }
    else if ((d>=abs(r1-r2))&&(d<=r1+r2)) //якщо відстань між точками відповідає умові перетину
    {
        if ((d==abs(r1-r2))||(d==r1+r2))
            rez=1;
        else
            rez=2;
    }
    else // не відповідає жодній умові
    {
        rez=0;
    }

    printf ("\nКількість перетинів: %d\n", rez); //виводимо результат
    return 0;
}
