//22计算机五班 刘均宝 2022122100848

//问题1.计算阶乘和数。（总分占比20% ）
//假设有这样一个三位数m，其百位、十位和个位数字分别是a、b、c，如果m = a!+ b!+ c!，则这个三位数就称为三位阶乘和数（约定0 != 1）。请编程计算并输出所有的三位阶乘和数。（总分占比25 % ）

//设计思路。首先创建一个计算阶乘的函数，其次任务要求求出所有的三位阶乘和数，所以使用穷举法列出所有可能的数，并调用出阶乘函数和m进行判断，相同则输出

//源代码
#include<stdio.h>
//计算结阶乘函数
long Fact(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}
//主函数
int main()
{
    int n, m;
    //穷举法计算列出全部可能的书
    for (int a = 0; a < 10; a++)
    {
        for (int b = 0; b < 10; b++)
        {
            for (int c = 0; c < 10; c++)
            {
                n = Fact(a) + Fact(b) + Fact(c);
                m = a * 100 + b * 10 + c;
                if (m == n)
                {
                    printf("%d\n", m);
                }
            }
        }
    }
    return 0;
}
//执行结果
//145


//问题2.绘制字母金字塔。（总分占比20% ）
//要求用户从键盘输入一个大写字母，使用嵌套循环产生像下面这样的金字塔图案：（总分占比25%
//设计思路
//首先将输入的字母通过ascii码转换成对应的行数，其次使用for循环进行循环打印。第一层for血还打印换行符，其次for循环带你空格，再正序和逆序打印ABCD。。。。。

//源代码
#include<stdio.h>
int main()
{
    int line_number;//行数
    char x;//输入字符
    scanf("%c", &x);
    line_number = x - 64;//ASCII码计算
    for (int n = 1; n <= line_number; n++)      //打印换行符
    {
        for (int k = 1; k <= line_number - n; k++) //打印空格
            printf(" ");
        for (int m = 0; m < n; m++)
            printf("%c", 65 + m);
        for (int b = n; b > 1; b--)
            printf("%c", 65 + b - 2);
        printf("\n");
    }
    return 0;
}

//测试输出
G
      A
     ABA 
    ABCBA
   ABCDCBA
  ABCDEDCBA
 ABCDEFEDCBA
ABCDEFGFEDCBA




//问题3.利用泰勒级数计算sinx的值。（总分占比20% ）
//设计思路
//首先创建一个计算阶乘和幂次方的函数，再在主函数中调用

//源代码
#include <stdio.h>
#include <math.h>
double Fact(double n);
double pow_n(double x, double n);
void sinx(double x);
int main()
{
    double x;
    printf("Input x:\n");
    scanf("%lf", &x);
    sinx(x);
    return 0;
}
//计算sin
void sinx(double x) {
    int sign = 1;//正负号标识符
    int count = 1;//用于计数
    double fraction, sinx = x;
    int i = 1;
    do {
        count++;  //计数
        i = i + 2;
        sign = -sign;//正负号切换
        fraction = pow_n(x, i) / Fact(i);//计算每个分母
        fraction = fraction * sign;
        sinx = sinx + fraction;
    } while (fabs(fraction) >= 1e-5);
    printf("sin(x)=%.3f,count=%d\n", sinx, count);
}
//阶乘
double Fact(double n)
{
    double result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}
//自定义pow函数x的n次幂
double pow_n(double x, double n)
{
    double m = 1;
    if (n == 0)
        return 1;
    else {
        for (int i = 1; i <= n; i++) {
            m = m * x;
        }
        return m;
    }
}
//执行结果Input x:
//20
//sin(x) = 0.913, count = 32



//问题4. 计算100~200之间的所有素数之和。（总分占比20%）
//设计速录：首先创建一个判断素数的函数（能被除去自身和1整除的数就不是素数，反之是素数），在创建个主函数，使用for循环，判断100~200之间的素数。

//源代码
#include<stdio.h>
int is_prime(int x);
int main()
{
    for (int k = 100; k <= 200; k++)
    {
        if (is_prime(k) == 1)
            printf("sum=%d\n", k);
    }
    return 0;
}

//素数函数
int is_prime(int x) {
    for (int i = 2; i < x; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}


//执行结果
//sum=101
//sum=103
//sum=107
//sum=109
//sum=113
//sum=127
//sum=131
//sum=137
//sum=139
//sum=149
//sum=151
//sum=157
//sum=163
//sum=167
//sum=173
//sum=179
//sum=181
//sum=191
//sum=193
//sum=197
//sum=199





//问题5.编程实现一个输入指定范围内的整数的函数。（总分占比20% ）
//编程实现一个输入指定范围内的整数的函数getint，其完整的函数原型为：int getint(int min, int max); ，它负责接收用户的输入进行验证，保证接收的一定是一个介于min和max之间（[min, max]区间内）的一个整数并最后返回该整数。如果用户输入不合法，则会提示继续输入，直到输入合法时为止。要求编写完整的程序并
////设计思路
//首先创建一个getinnt函数，进行判断输入的数字是否在范围内，不在则重新输入。在主函数中输入最大值最小值，并传输给getint函数进行判断
//源代码
#include<stdio.h>
int getint(int min, int max);
int main()
{
    int min, max;
    printf("\"Please enter min,max:\n");
    scanf("%d %d", &min, &max);
    getint(min, max);
    return 0;
}

int getint(int min, int max)
{
    int n;
    do {
        printf("Please enter an integer [%d..%d]:\n", min, max);
        scanf("%d", &n);
    } while (min > n || n > max);
    printf("The integer you have entered is:%d\n", n);
}

//执行结果
//"Please enter min,max:
//3 100
//Please enter an integer [3..100]:
//3333
//Please enter an integer [3..100]:
//22
//The integer you have entered is:22
