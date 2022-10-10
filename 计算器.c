#define _CRT_SECURE_NO_WARNINGS
//（18）    编程设计一个简单的计算器程序，要求根据用户从键盘输入的表达式计算，并使用switch语句实现。
//
//操作数1  运算符op  操作数2  计算表达式的值。指定的运算符为加(+)、减(-)、乘(*)、除(/ )。
#include<stdio.h>
int main()
{
	char op;
	float result,x,y;
	printf("please input number op number");
	scanf("%f%c%f", &x, &op, &y);
	switch (op)
	{
		case '+':
		{
			result = x + y;
			printf("result = %0.2f", result);
			break;
		}
		case '-':
		{
			result = x - y;
			printf("result = %0.2f", result);
			break;
		}
		case '*':
		{
			result = x * y;
			printf("result = %0.2f", result);
			break;
		}
		case '/':
		{
			result = x / y;
			printf("result = %0.2f", result);
			break;
		}
	}
	return 0;
}

