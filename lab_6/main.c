#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    int x1, x2, y1, y2, dx, dy;
    float d;
    printf ("\nВведіть координати початку та кінця вектора\n");
    scanf ("%d %d %d %d", &x1, &y1, &x2, &y2); //введення точок
    dx=x2-x1;
    dy=y2-y1;
    d=sqrt(pow(dx, 2)+pow(dy, 2)); // пошук довжини вектора
    printf("Довжина вектора: %0.6f\n", d); //виводимо результат
    return 0;
}
