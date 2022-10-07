// 有一个函数
// y={  x      x<1
//     |  2x-1   1<=x<10
//     { 3x-11  x>=10

// 写一段程序，输入x，输出y
#include<stdio.h>
int main()
{
    int x;
    int y;
    scanf("%d",&x);
    if(x<1)
    y = x;
    if(1<=x&&x<10)
    y = 2*x-1;
    if(x>=10)
    y = 3*x-11;
    printf("%d",y);

    return 0;
}