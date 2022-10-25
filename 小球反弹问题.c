//一个球从100米高度自由落下，每次落地后反跳回原高度的一半，再落下并反弹......，求它在第5次和第10次落地时，分别共经过了多少米？第5次和第10次反弹分别是多高？要求计算结果保留到小数点后3位。用户从键盘输入想要计算的第n次（n <= 15）。
#include<stdio.h>
int main()
{
    float h = 100;
    float rh = 50, s = 0;
    int n;
    printf("Input:\n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        s = s + 2 * rh;
        rh = rh / 2;
    }
    s = s + 100;
    printf("第n次反弹共经过多少米：%0.3f", s);
    printf("第n次的反弹高度：%0.3f", rh);
    return 0;