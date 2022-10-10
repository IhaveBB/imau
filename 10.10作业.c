//2022122100848 刘均宝


#define _CRT_SECURE_NO_WARNINGS
//项目1.分支程序设计：
//
//问题1.编写程序，在已知三个数a，b，c中找出最大值放于max中，然后输出max。（总分占比30% ）
//设计思路描述：（10）
//
//答：首先定义三个数abc，后对其进行判断。首先比较a和b的大小，将大的数存入max，再判断c和max的大小，最后输出。
//
//源代码：（6分）
#include<stdio.h>
#include<math.h>
int main()
{
 int a = 0, b = 0, c = 0, na = 0, nb = 0, nc = 0, max;
 printf("请输入三个数");
 scanf("%d%d%d", &a, &b, &c);
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
  printf("max=%d", max);
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
  printf("max=%d", -max);
 }
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

//问题2.设计程序，确认逻辑运算和关系运算的运算结果是1和0。（总分占比30% ）
//设计思路描述：（10）		
//答：true 代表 1，false 代表 0，使用bool变量进行描述表达。通过判断3=4，3>4和3>4&&3>2等例句，来说明计算机语言中逻辑运算和关系运算的结果是0和1
//
//源代码：（6分）
#include<stdio.h>
int main()
{
	bool a;
	//关系运算符
	a = (3 == 4);
	printf("3=4的结果为%d\n", a);
	a = (3 != 3);
	printf("3不等于3的结果为%d\n", a);
	a = (3 > 1);
	printf("3大于1的结果为%d\n", a);
	a = (3 < 1);
	printf("3小于1的结果为%d\n", a);
	a = (3 >= 1);
	printf("3大于等于1的结果为%d\n", a);
	a = (3 <= 1);
	printf("3小于等于1的结果为%d\n", a);
	a = (3 > 5 || 5 == 5);
	printf("3大于5或5等于5的结果为%d\n", a);
	a = (3 > 5 && 5 == 5);
	printf("3大于5和5等于5的结果为%d\n", a);
	return 0;
}


//执行结果(测试不同分支结果)：（4分）
//3=4的结果为0
//3不等于3的结果为0
//3大于1的结果为1
//3小于1的结果为0
//3大于等于1的结果为1
//3小于等于1的结果为0
//3大于5或5等于5的结果为1
//3大于5和5等于5的结果为0

//设计过程中遇到的问题与改进，经验总结：（10分）
//在设计过程中，误将=理解为==，导致错误。
//因此在设计过程中，应加强理解，记住并改正错误。

//项目2.分支程序设计练习：（以下问题提供代码即可，总分占比40% ）
//
//
//
//
//
//（1）    编写一个程序，输入两个整数，如果前者是后者的约数，则显示后者是前者的约数，否则显示后者不是前者的约数。
#include<stdio.h>
int main()
{
	int a=0, b=0;
	printf("请输入两个数值");
	scanf("%d%d", &a, &b);
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
//（2）    编写程序，输入一个数，输出该数的绝对值。
#include<stdio.h>
#include<math.h>
int main()
{
	int a,na;
	printf("请输入一个数值");
	scanf("%d", &a);
	na = abs(a);
	printf("%d的绝对值是%d", a, na);
	return 0;
}
// 3.编写程序，输入两个数，如果两数相等，则显示 a 等于 b，如果 a>b,则显示 a>b,如果 a<b,
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
#define _CRT_SECURE_NO_WARNINGS
//（4）    编写一个程序，其功能为：从键盘输入三个数a、b、c，判断a + b = c是否成立，
//若成立输出“a + b = c”的信息，否则输出“a + b != c”的信息。
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入三个数");
	scanf("%d%d%d",  &a, &b, &c );
	if (a + b == c)
	{
		printf("%d+%d=%d", a, b, c);
	}
	else
	{
		printf("%d+%d!=%d", a, b, c);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
//（5）    编写程序，计算输入的三个整数中的最小值并输出。
#include<stdio.h>
int main()
{
	int a, b, c, min;
	printf("请输入三个数abc");
	scanf("%d%d%d", &a, &b, &c);
	if (a >= b)
	{
		min = b;
	}
	else
	{
		min = a;
	}
	if (c <= a)
	{
		min = c;
	}
	printf("最小值为%d", min);
		return 0;
}
#define _CRT_SECURE_NO_WARNINGS
//（6）    8.编写程序，计算输入的四个整数中的最大值并输出。
#include<stdio.h>
int main()
{
	int x,max,i;
	max = -1e30;
	printf("^please input fore number");
	for (i =0;i<4;i++)
	{
		scanf("%d", &x);
		if (x > max)
		max = x;
	}
	printf("max=%d", max);
	return 0;
#define _CRT_SECURE_NO_WARNINGS
//（7）    用if语句编程实现输入三角形的三个边长，判断三边长是否能构成一个三角形，
//若能，则计算出三角形的面积，若不能，则输出信息告诉用户输入的三边长不能构成三角形。
#include<stdio.h>
#include<math.h>
int isTriangle(int a, int b, int c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		return 1;
	}
	return 0;
}
int area(int a, int b, int c)
{
	int p, s;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}
int main()
{
	int a, b, c;
	printf("please input tree number");
	scanf("%d%d%d", &a, &b, &c);
	if (isTriangle(a,b,c) == 1)
	{
		printf("it is a triangle\n");
	}
	else
	{
		printf("it is'n a triangle\n");
		return 0;
	}
	int s;
	s = area(a, b, c);
	printf("%d", s);
	return 0;

}
//88888
#define _CRT_SECURE_NO_WARNINGS
//（9）    输入三角形的三边长，判断这个三角形是否是直角三角形。直角三角形斜边最长，
//要先找出三边中最长的边，判断最长边的平方是否等于其余两边的平方和，若相等就是直角三角形。
#include<stdio.h>
int main()
{
	int a, b, c, s;
	scanf("%d%d%d", &a,&b, &c);
	if (a >=b&&a>=c)
	{
		if(a * a ==- b * b + c * c)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
	else if (b >= a && b >= c)
	{
		if (b * b == a * a + c * c)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
	else if (c >= b && c >= a)
	{
		if (c * c == b * b + a * a)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
//（10）    编写程序，任意输入一个年份，判断是否是闰年。
//
//闰年的条件是符合下面条件之一：
//
//能被4整除，但不能被100整除；能被4整除，又能被400整除。
//
//编写一个程序，计算下列函数：
#include<stdio.h>
int main()
{
	int a=0,result;
	scanf("%d", &a);
	if (a % 4 == 0 && a % 100 != 0 || a % 4 == 0 && a % 400 == 0)
	{
		printf("%d是闰年",a);
	}
	else
	{
		printf("%d不是闰年", a);
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
//（11）    某产品生产成本c = c1 + mc2，其中c1为固定成本，c2为单位产品可变成本。当生产数量m < 10000时，c1 = 20000元，c2 = 10元；
//	当生产数量m≥10000时，c1 = 40000元，c2 = 5元；编写一个程序，其功能为：分别计算出生产数量为6000以及25000时，总生产成本及单位生产成本。
#include<stdio.h>
int main()
{
	int c1, c2, c, m,single;
	printf("please input one number");
	scanf("%d", &m);
	if (m < 10000)
	{
		c1 = 20000;
		c2 = 10;
		c = c1 + m * c2;
		single = c / m;
		printf("总生产成本为：%d，单位生产成本为：%d",c, single);
	}
	else if (m >= 10000)
	{
		c1 = 40000;
		c2 = 5;
		c = c1 + m * c2;
		single = c / m;
		printf("总生产成本为：%d，单位生产成本为：%d",c,single);
	}
	return 0;
}
//（12）    编写程序，输入某学生的成绩，经处理后给出学生的等级，等级分类如下：
#include<stdio.h>
int main()
{
    int scores;
    scanf("%d", &scores);
    if (90 <= scores && scores <= 100)
        printf("A");
    if (80 < scores && scores < 89)
        printf("B");
    if (70 < scores && scores < 79)
        printf("C");
    if (60 < scores && scores < 69)
        printf("D");
    if (scores < 60)
        printf("E");
    return 0;
}
	
#define _CRT_SECURE_NO_WARNINGS
//（13）    编写程序，输入一个不多于5位的正整数，要求
//
//①输出它是几位数；
//
//②分别输出每一位数字；
//
//③按逆序输出各位数字，如原数为321, 则应输出123。
//
//并且应准备以下测试数据 :
//
//①要处理的数为1位正整数；
//
//②要处理的数为2位正整数；
//
//③要处理的数为3位正整数；
//
//④要处理的数为4位正整数；
//
//⑤要处理的数为5位正整数；
//
//除此之外，程序还应当对不合法的输出作必要的处理。例如：
//
//输入负数；
//
//输入的数超过5位；
#include<stdio.h>
int main()
{
	int x,a,b,c,d,e;
	printf("please input a number");
	scanf("%d", &x);
	if (0<x&&x<99999);
	{
		a = x / 10000;
		b = x % 10000 / 1000;
		c = x % 1000 / 100;
		d = x % 100 / 10;
		e = x % 10;
		if (a != 0)
		{
			printf("%d%d%d%d%d是五位数，逆序输出为%d%d%d%d%d", a, b, c, d, e, e, d, c, b, a);
		}
		else if (b != 0)
		{
			printf("%d%d%d%d是4位数，逆序输出为%d%d%d%d", b, c, d, e, e, d, c, b);
		}
		else if (c != 0)
		{
			printf("%d%d%d是3位数，逆序输出为%d%d%d", c, d, e, e, d, c);
		}
		else if (d != 0)
		{
			printf("%d%d是2位数，逆序输出为%d%d", d, e, e, d);
		}
		else if (e != 0)
		{
			printf("%d是1位数，逆序输出为%d", e, e);
		}
	}
	
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
//（14）    输入年份和月份，求该月有多少天。
//
//（提示：要考虑大月有31天，小月有30天，闰年的二月有29天以及非闰年的二月有28天这几种情况。）
#include<stdio.h>
int main()
{
	int month=0,year=0;
	scanf("%d%d", &year, &month);
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("本月31天");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("本月30天");
			break;
		case 2:
		{
			if (year % 4 == 0 && year % 100 != 0 || year % 4 == 0 && year % 400 == 0)
				printf("本月29天");
			else
				printf("本月28天");
		}

	}
	return 0;
}
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
			// 刘均宝printf("%d不是水仙花数", x);
		}
	}
	else
	{
		printf("error");
	}
	return 0;
}
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
#define _CRT_SECURE_NO_WARNINGS
//（17）    编程设计一个简单的计算器程序，要求根据用户从键盘输入的表达式计算，并使用if语句实现。
//
//操作数1  运算符op  操作数2  计算表达式的值。指定的运算符为加(+)、减(-)、乘(*)、除(/ )。
#include<stdio.h>
int main()
{
	int x, y;
	char op;
	float result;
	printf("please input number operator number");
	scanf("%d%c%d", &x, &op, &y);
	if (op == '+')
	{
		result = x + y;
		printf("result=%0.2f", result);
	}
	else if (op == '-')
	{
		result = x - y;
		printf("result=%0.2f", result);
	}
	else if (op == '*')
	{
		result = x * y;
		printf("result=%0.2f", result);
	}
	else if (op == '/')
	{
		result = x / y;
		printf("result=%0.2f", result);
	}
	return 0;
}
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

