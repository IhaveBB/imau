//有三个整数a b c,由键盘输入，输出其中的最大的数
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int x;
    int m;
    scanf("%d%d%d",&a, &b, &c);
    if(a>b)
        x = a;
    else
        x = b;
    if(x>c)
        m = x;
    else
        m = c;
    printf("%d",m);
    return 0;
}