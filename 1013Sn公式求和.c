// 求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字，为2。 例如，n=5时=2+22+222+2222+22222，n由键盘输入。

#include<stdio.h>
int main()
{
    int n,i,sum = 0,a=2;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        sum+=a;
        a=a*10+2;
    }
    printf("%d",sum);
    return 0;
}