#define _CRT_SECURE_NO_WARNINGS
//（16）    编程实现：输入一个整数，判断它能否被3，5，7整除，并输出以下信息之一：
//
//1） 能同时被3，5，7整除；
//
//2） 能被其中两数（要指出哪两个）整除；
//
//3） 能被其中一个数（要指出哪一个）整除；
//
//4） 不能被3，5，7任一个整除。
#include<stdio.h>
int main()
{
	int x;
	printf("please input a number");
	scanf("%d", &x);
	if (x % 3 == 0 && x % 5 == 0 && x % 7 == 0)
	{
		printf("%d可同时被3 5 7整除", x);
	}
	else if (x % 3 == 0 && x % 5 == 0)
	{
		printf("%d可同时被3 5整除", x);
	}
	else if (x % 5 == 0 && x / 7 == 0)
	{
		printf("%d可同时被5 7整除", x);
	}
	else if (x % 3 == 0 && x / 7 == 0)
	{
		printf("%d可同时被3 7整除", x);
	}
	else if (x % 3 == 0)
		printf("%d该数能被3整除\n",x);
	else if (x % 5 == 0)
		printf("%d该数能被5整除\n", x);
	else if (x % 7 == 0)
		printf("%d数能被7整除\n", x);
	return 0;
}
