//刘均宝 2022122100848
//1.输入一个整数，判断其是否是3的倍数。
#include<stdio.h>
 int main()
 {
    int a;
    printf("请输入一个整数");
    scanf("%d",&a);
    if(a%3==0)
    {
        printf("您输入的是三的倍数");
    }
    else
    {
        printf("您输入的不是三的倍数");
    }
     return 0;
 }

//2编写一个程序，输入两个整数，如果前者是后者的约数，则显示后者是前者的约数，否则
//显示后者不是前者的约数。
#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入两个数值");
	scanf("%d%d", a, b);
	if (a % b == 0 || b == 1)
	{
		printf("%d是%d的约数", b, a);
	}
	else
	{
		printf("%d不是%d的约数", b, a);
	}

	return 0;
}

//3.编写程序，输入一个数，输出该数的绝对值。
#include<stdio.h>
int main()
{
    int a,x;
    printf("请输入一个数");
    scanf("%d",&a);
    if(a<0)
    {
        x = -a;
        printf("您输入数值的绝对值是%d",x);
    }
    else 
        printf("您输入数值的绝对值是%d",a);
    return 0;
}

// 4.编写程序，输入两个数，如果两数相等，则显示 a 等于 b，如果 a>b,则显示 a>b,如果 a<b,
// 则显示 a 小于 b。
#include<stdio.h>
int main()
{
    int a,b,x;
    printf("请输入两个数");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d>%d",a,b);
    }
    else if(a==b)
    {
        printf("%d=%d",a,b);
    }
    else if(a<b)
    {
        printf("%d<%d",a,b);
    }

    return 0;
}