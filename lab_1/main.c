#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251); // ���������� ��������� ����
    int t1, t2, t3;
    float rez;
    printf("\n������ ��� ��������: ");
    scanf("%d %d %d", &t1, &t2, &t3); // ������� ��������
    rez=(t1+t2+t3)/9.00; // ��������� ��������� �� ������
    printf("���, ���������� ��� �'������ ������: %0.2f �����\n", rez); // ��������� ����������
    return 0;
}
