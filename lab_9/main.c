#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251); // ���������� ��������� ����
    int x, y, i=1, j, kilk, fact;
    printf("\n������ �������� x �� y: ");
    scanf ("%d %d", &x, &y); // ������� ���

    y=y-x;
    x=0; //���������� ������ ��� �������� ��� ����������� ����������

    while (x<y) //��������� ����
    {
        if (x==0) //������ ������ ������ ������� ���� 1
        {
            x=x+1;
            i=1;
        }
        else
        {
            fact=0;
            for (j=1; j<=i;j++) //��������� ��������
            {
                fact=fact+j;
            }

            if (fact+i+1<=y-x) //�� ��������� �������� ��������� ����
            {
                x=x+(i+1);
                i=i+1;
            }
            else if (fact<=y-x)
            {
                x=x+i;
            }
            else
            {
                x=x+(i-1);
                i=i-1;
            }
        }
        kilk=kilk+1; // ����� ���, �� ���� ������, ������� ����� ���������� �� 1
    }

    printf ("̳������� ������� ����� ��� �������� �� x �� y: %d\n", kilk); //�������� ���������
    return 0;
}
