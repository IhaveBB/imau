#define _CRT_SECURE_NO_WARNINGS
//项目1.分支程序设计：
//
//问题1.编写程序，在已知三个数a，b，c中找出最大值放于max中，然后输出max。（总分占比30% ）
//设计思路描述：（10）
//
//答：首先定义三个数abc，后对其进行判断。首先比较a和b的大小，将大的数存入max，在判断c和max的大小，最后输出。
//
//源代码：（6分）
#include<stdio.h>
#include<math.h>
int main()
{
	int a=0,b=0,c=0,na=0,nb=0,nc=0,max;
	printf("请输入三个数");
	scanf("%d%d%d",&a,&b,&c);
	if (a > 0 && b > 0 && c > 0)
	{
		if (a >= b)
		{
			max = a;
		}
		else
		{
			max = b;
		}
		if (c > max)
		{
			max = c;
		}
	}
	if (a < 0 && b < 0 && c < 0)
	{
		//负数绝对值转换为正数
		na = abs(a);
		nb = abs(b);
		nc = abs(c);

		if (na >= nb)
		{
			max = nb;
		}
		else
		{
			max = na;
		}
		if (nc < max)
		{
			max = nc;
		}
	}
	printf("max=%d", -max);
	return 0;
}
//执行结果(测试不同分支结果)：（4分）
// 
//答：a= 5 b= 10 c=15  max=15
//    a= 15 c=20 c=25 max = 25
//    a=-1 b=-2 c=-3 max = -1
//
//设计过程中遇到的问题与改进，经验总结：（10分）
//答：设计过程中,发现负数无法比较，因此分两种情况进行判断。
