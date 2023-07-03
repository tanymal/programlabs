#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251); // підключення української мови
    int t1, t2, t3;
    float rez;
    printf("\nВведіть три значення: ");
    scanf("%d %d %d", &t1, &t2, &t3); // вводимо значення
    rez=(t1+t2+t3)/9.00; // знаходимо результат по формулі
    printf("Час, необхідний для з'їдання пирога: %0.2f годин\n", rez); // виведення результату
    return 0;
}
