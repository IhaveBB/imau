//问题1. 修改下面这个用do-while语句实现的程序，用while语句实现，并对比其优缺点。（总 分占比30%）

//设计思路描述：（10）
//do while语句是先执行，后判断，while语句是先判断条件是否成立，后执行
//所以在while语句中，可以先写一个死循环，再自行安排一个if break，当输入0时，来结束语句，模仿do while

//源代码：（6分）
#include<stdio.h>
int main()
{
    int sum = 0, m;
    while (1)
    {
        printf("Input m:\n");
        scanf("%d", &m);
        sum = sum + m;
        printf("sum = %d\n", sum);
        if (m == 0)
            break;
    }
    return 0;
}
//执行结果(测试不同分支结果)：（4分）
//Input m:
//1
//sum = 1
//Input m:
//2
//sum = 3
//Input m:
//3
//sum = 6
//Input m:
//4
//sum = 10
//Input m:
//0
//sum = 10

//设计过程中遇到的问题与改进，经验总结：（10分）
//在设计过程中，第一次错误的将do while语句直接换成while语句，没有考虑其他条件，导致无法运行
//后发现可以写一个while死循环，在后面使用break来结束程序，来模仿do while。



//问题2.修改程序（总分占比30%）
//从键盘任意输入一个正整数，编程判断它是否是素数，若是素数，输出“Yes!”，否则输出“No！”。已知负数、0和1都不是素数。请找出下面程序的错误并改正之，同时按照给出的运行示例检查修改后的程序。

//代码思路分析：（10）
//题目中代码思路：先输入一个数字n，再创建一个从2到所输入数字的根号的for循环，在循环体中，使n和n的开平方之间的每个数字相除判断是否有余数。有余数则不是素数，反之是素数

//错误内容，修改思路：（10分）
//1.for循环中，不应该让i小于等于n的开平方。企应直接让i<n
//2.if判断中，应该是n%i==0，而不是赋值为0
//3.输出YES和NO的输出条件有误，在题中，可能会输出多个NO，YES无论如何也会输出，应额外添加一个参数，并使用新的if语句供YES和no进行判断输出

//修改后源代码：（5分）
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    int x = 0;
    printf("Input n:\n");
    scanf("%d", &n);
    for (i = 2; i < n; i++) {
        if (n % i != 0) {
            x++;  //需注意！！非0及为真；如果n为负数，那就不会进行for循环，x=0
        }
    }
    if (x != 0)
    {
        printf("YES!\n");
    }
    else
    {
        printf("NO!\n");
    }

    return 0;
}
//执行结果(测试不同分支结果)：（5分）
//Input n:
//-3↙
//No!
//Input n:
//0↙
//No!
//Input n:
//1↙
//No!
//Input n:
//6↙
//No!
//Input n:
//7↙
//Yes!


//问题3. 判断一个整型数据有几位。（总分占比40%）
//a．判断一个整型数据有几位V1.0

//设计思路描述：（10）
//首先使用scanf接受一个需要判断的数=N，在使用abs函数，获取N的绝对值。
//使用while循环，使N=N/10，直到N==0为止[int整数类型]，每次循环记录一次，即可获取N的位数。

//源代码：（6分）
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i = 0, sum, x;
    printf("Please enter the number:\n");
    scanf("%d", &n);
    x = n;//保留原数值，用于最后输出。
    n = abs(n);
    while (1)
    {
        n = n / 10;
        i++;
        sum = i;
        if (n == 0)
            break;
    }
    printf("%d: %d bits", x, sum);

    return 0;
}
//执行结果(测试不同分支结果)：（4分）
//Please enter the number:
//21125↙
//21125: 5 bits
//Please enter the number:
//-12234↙
//-12234: 5 bits


//b．判断一个整型数据有几位V2.0

//设计思路描述：（10）
//首先，判断个数的的基础代码不变，仍旧使用程序a中的代码判断位数。
//判断出个数后，创建一个数组arr[10],代表1~9出现的个数。使用for循环，对数组中的每个元素初始化。
//然后判断1-9每个数字出现了多少次，假设为数字为18971，可以先让18917%10，获得最后一位是7。使用for循环和if语句进行判断，当i自增到7时候，使数组中第八位加1，然后while循环18917/10获得1891.以此类推
//最后，使用for循环，打印出数组中不为0的元素

//源代码
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i = 0, sum, x;
    printf("Please enter the number:\n");
    scanf("%d", &n);
    x = n;//保留原数值，用于最后输出。
    n = abs(n);
    while (1)
    {
        n = n / 10;
        i++;
        sum = i;
        if (n == 0)
            break;
    }
    printf("%d: %d bits\n", x, sum);
    x = abs(x);
    int arr[10];
    //初始化数组
    for (i = 0; i <= 10; i++)
        arr[i] = 0;
    while (x != 0)
    {
        for (i = 0; i <= 9; i++)
        {
            if (x % 10 == i)
                arr[i]++;
        }
        x = x / 10;
    }
    for (i = 0; i <= 9; i++)
    {
        if (arr[i] != 0)
            printf("%d: %d\n", i, arr[i]);
    }
    return 0;
}

//执行结果(测试不同分支结果)：（4分）
//Please enter the number:
//12226
//12226: 5 bits
//1: 1
//2: 3
//6: 1
//Please enter the number:
//-1541484
//-1541484: 7 bits
//1: 2
//4: 3
//5: 1
//8: 1
