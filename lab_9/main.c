#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251); // підключення української мови
    int x, y, i=1, j, kilk, fact;
    printf("\nВведіть значення x та y: ");
    scanf ("%d %d", &x, &y); // вводимо дані

    y=y-x;
    x=0; //присвоюємо змінним нові значення для знаходження результату

    while (x<y) //створюємо цикл
    {
        if (x==0) //пергим кроком завжди повинен бути 1
        {
            x=x+1;
            i=1;
        }
        else
        {
            fact=0;
            for (j=1; j<=i;j++) //знаходимо факторіал
            {
                fact=fact+j;
            }

            if (fact+i+1<=y-x) //від факторіала залежить наступний крок
            {
                x=x+(i+1);
                i=i+1;
            }
            else if (fact<=y-x)
            {
                x=x+i;
            }
            else
            {
                x=x+(i-1);
                i=i-1;
            }
        }
        kilk=kilk+1; // кожен раз, як цикл працює, кількість кроків збільшується на 1
    }

    printf ("Мінімальну кількість кроків для переходу від x до y: %d\n", kilk); //виводимо результат
    return 0;
}
