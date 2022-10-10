#define _CRT_SECURE_NO_WARNINGS
//（15）    输入一个三位数，若此数是水仙花数输出“Y”，否则输出“N”， 若输入值不是三位数输出“data error”。
//
//（提示：水仙花数是一个三位数，组成这个三位数的三个数字的立方和与这个三位数相等。如：153 = 13 + 53 + 33。
//判断是否是水仙花数需把构成三位数的三个数字分离出来并存入变量。）
#include<stdio.h>
int main()
{
	int x,a,b,c;
	printf("please input a number");
	scanf("%d", &x);
	if (x < 1000)
	{
		a = x / 100;
		b = x % 100 / 10;
		c = x % 10 / 1;
		if (x == a*a*a+b*b*b+c*c*c)
		{
			printf("%d是水仙花数", x);
		}
		else
		{
			printf("%d不是水仙花数", x);
		}
	}
	else
	{
		printf("error");
	}
	return 0;
}
