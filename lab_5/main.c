#include <stdio.h>
#include <windows.h>

long long func(int n) // ������� ������ ����������
{
    const int MOD = 12345;
    long long dp[n+1];
    n++;

    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 3;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = (dp[i-1] + dp[i-2]) % MOD;
    }

    return dp[n]; // ��������� ���������
}

int main()
{
    int n;
    long long rez;
    SetConsoleOutputCP(1251); //���������� ��������� ����
    printf("������ ������� �����������: ");
    scanf("%d", &n);//�������� ����������

    rez = func(n); //��������� �� �������

    printf("ʳ������ ������� ������������� �� ������� 12345: %lld\n", rez); //��������� ����������

    return 0;
}
