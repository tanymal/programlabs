#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    int x1, x2, y1, y2, dx, dy;
    float d;
    printf ("\n������ ���������� ������� �� ���� �������\n");
    scanf ("%d %d %d %d", &x1, &y1, &x2, &y2); //�������� �����
    dx=x2-x1;
    dy=y2-y1;
    d=sqrt(pow(dx, 2)+pow(dy, 2)); // ����� ������� �������
    printf("������� �������: %0.6f\n", d); //�������� ���������
    return 0;
}
