#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    int x1, y1, r1, x2, y2 ,r2, rez=0;
    float d;

    printf("������ ���������� ������ �� ������ \n");
    scanf ("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2 ,&r2); //������� ���

    d=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));

    if (d==0) // ���� ������� �� ������� 0
    {
        if (r1==r2)
            rez=-1;
        else
            rez=0;
    }
    else if ((d>=abs(r1-r2))&&(d<=r1+r2)) //���� ������� �� ������� ������� ���� ��������
    {
        if ((d==abs(r1-r2))||(d==r1+r2))
            rez=1;
        else
            rez=2;
    }
    else // �� ������� ����� ����
    {
        rez=0;
    }

    printf ("\nʳ������ ��������: %d\n", rez); //�������� ���������
    return 0;
}
