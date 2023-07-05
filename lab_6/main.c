#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    int x1, x2, y1, y2, dx, dy;
    float d;
    printf ("\n¬вед≥ть координати початку та к≥нц€ вектора\n");
    scanf ("%d %d %d %d", &x1, &y1, &x2, &y2); //введенн€ точок
    dx=x2-x1;
    dy=y2-y1;
    d=sqrt(pow(dx, 2)+pow(dy, 2)); // пошук довжини вектора
    printf("ƒовжина вектора: %0.6f\n", d); //виводимо результат
    return 0;
}
