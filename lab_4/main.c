#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    int n, kilk=0, i;

    printf("\n������ ����������� ����� n: ");
    scanf ("%d", &n); // ������� n

    for (i=1; i<=n; i++) // �����������, ������ ���������
    {
        if (n/i==n%i)
        {
            kilk++;
        }
    }

    printf("ʳ������ ����� ������� ����� %d: %d\n", n, kilk); // �������� ���������
    return 0;
}
