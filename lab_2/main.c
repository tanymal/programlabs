#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int func (int x, int y) // ������� ����������� ���
{
    int nsk;
    nsk=x*y;
    while ((x!=0) && (y!=0))
    {
        if (x>y)
            x=x%y;
        else
            y=y%x;
    }
    nsk=nsk/(x+y);
    return nsk;
}

int main()
{
    SetConsoleOutputCP(1251);
    int i, n, N[1000], rez;
    printf ("\n������ ������� ����� : ");
    scanf ("%d", &n); // ������� ������� �������� �������

    printf ("������ �����: ");

    for (i=0; i<n;i++)
    {

        scanf ("%d", &N[i]); // ������� �������� �������
    }

    rez=N[0];

    for (i=1; i<n;i++) // ����������� �������� ���
    {
        rez= func(rez, N[i]);
    }

    printf ("��� = %d\n", rez); // ��������� ����������

    return 0;
}
