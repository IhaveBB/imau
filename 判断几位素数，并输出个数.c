//�ж�һ�����������м�λV2.0

//�Ӽ�������һ����������(int��)����д�����жϸ��������м�λ������������������ֵĸ��������磬�Ӽ�����������16644, ����������5λ��������1��1, 2��6, 2��4��
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i = 0, sum, x;
    printf("Please enter the number:\n");
    scanf("%d", &n);
    x = n;//����ԭ��ֵ��������������
    n = abs(n);
    while (1)
    {
        n = n / 10;
        i++;
        sum = i;
        if (n == 0)
            break;
    }
    printf("%d: %d bits\n", x, sum);
    x = abs(x);
    int arr[10];
    //��ʼ������
    for (i = 0; i <= 10; i++)
        arr[i] = 0;
    while (x != 0)
    {
        for (i = 0; i <= 9; i++)
        {
            if (x % 10 == i)
                arr[i]++;
        }
        x = x / 10;
    }
    for (i = 0; i <= 9; i++)
    {
        if (arr[i] != 0)
            printf("%d: %d\n", i, arr[i]);
    }
    return 0;
}