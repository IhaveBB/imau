//判断一个整型数据有几位V2.0

//从键盘输入一个整型数据(int型)，编写程序判断该整数共有几位，并输出包含各个数字的个数。例如，从键盘输入整数16644, 该整数共有5位，其中有1个1, 2个6, 2个4。
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i = 0, sum, x;
    printf("Please enter the number:\n");
    scanf("%d", &n);
    x = n;//保留原数值，用于最后输出。
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
    //初始化数组
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