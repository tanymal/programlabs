#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long long func(int n) //����� ������ �� ��������
{
    long long dp0[n+1];
    long long dp1[n+1];

    dp0[1] = 2;
    dp1[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        dp0[i] = dp0[i-1] + dp1[i-1];
        dp1[i] = dp0[i-1];
    }

    return dp0[n] + dp1[n]; // ��������� ��������� ���������
}

int main()
{
    SetConsoleOutputCP(1251);
    int n;
    long long rez;
    printf("\n������ ������� �������: ");
    scanf("%d", &n); // ������� ����� ���

    rez = func(n); // ������� ������ ����������

    printf("ʳ������ ����� � %d ���������: %lld\n", n, rez); //�������� ���������

    return 0;
}
