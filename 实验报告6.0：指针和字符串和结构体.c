//2022122100848 计算机类五班 刘均宝
//实验项目1：指针练习
//1.编写自定义函数实现交换两个变量的值。
//编写函数void swap（int * pa, int* pb）交换两个变量的值，在主函数中输入3个整数，通过调用swap函数，实现将3个整数由小到大的顺序输出。
//设计思路
//首先编写swap函数，使用指针交换两个变量的值，因为如果使用a=b的话，交换的是形参，无法在主函数中生效，所以需要使用指针。主函数中任务需求为让三个证书从小到达输出，所以使用swap函数以此判断三个数。
//源代码
#include<stdio.h>
void swap(int* pa, int* pb);
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    swap(&a, &b);//执行后，a为小，b为大
    swap(&b, &c);//执行后，b为小，c为大
    swap(&a, &b);//执行后，a为小，b为大
    printf("%d %d %d", a, b, c);

    return 0;
}

void swap(int* pa, int* pb)
{
    //让小的数排在前面
    if (*pa > *pb) {
        int tmp = *pa;
        *pa = *pb;
        *pb = tmp;
    }
}
//执行结果：（2分）
//77 88 22
//22 77 88


//2.用指针方法实现3个数排序。
//输入三个字符串，按由小到大的 顺序输出，用指针来实现
//源代码
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20
int main()
{

    char str_1[SIZE];
    char str_2[SIZE];
    char str_3[SIZE];
    char* p1, * p2, * p3;

    scanf("%s%s%s", str_1, str_2, str_3);

    p1 = str_1;
    p2 = str_2;
    p3 = str_3;
    //strcmp函数，str1=str2返回0，str1>str2返回正数
    if (strcmp(p1, p2))
    {
        char* tmp = p1;
        p1 = p2;
        p2 = tmp;
    }
    if (strcmp(p2, p3))
    {
        char* tmp = p2;
        p2 = p3;
        p3 = tmp;
    }
    if (strcmp(p1, p2))
    {
        char* tmp = p1;
        p1 = p2;
        p2 = tmp;
    }
    // printf("%s,%s,%s\n", str_1, str_2, str_3);
    printf("%s,%s,%s", p1, p2, p3);
    return 0;
}
//执行结果
//请输入三个字符串:
//axxx
//xxxxx
//aaaadwd
//输出由小到大排序好的三个字符串:aaaadwd  axxx    xxxxx

//实验项目2：指针与字符串
//1.统计字符串中的各类字符个数。
//输入一个包含空格的字符串，用指针方法统计其中大写字母、小写字母、数字、空格及其他字符的个数。
//设计速录
//使用ascall码进行判断是何种字符。将数组赋值给指针，使用for进行循环判断。
//源代码
#include<stdio.h>
int main()
{
    int space = 0;
    int capital = 0;
    int lowercase = 0;
    int number = 0;
    int other = 0;
    char str[100];
    fgets(str, 100, stdin);
    char* p = str;
    for (*p; *p != '\0'; ++p)
    {
        if (*p == ' ') {
            space = space + 1;
        }
        else if (*p > 64 && *p < 91) {
            capital += 1;
        }
        else if (*p > 96 && *p < 123) {
            lowercase += 1;
        }
        else if (*p > 47 && *p < 58) {
            number += 1;
        }
        else {
            if (*p != '\n') {//因为fgets()函数会在末尾自动加上\n，影响判断结果，需要判断是否为换行符
                other += 1;
            }
        }
    }
    printf("空格的个数为：%d\n", space);
    printf("大写英文字母的个数为：%d\n", capital);
    printf("小写英文字母的个数为：%d\n", capital);
    printf("数字的个数为：%d\n", number);
    printf("其他字符的个数为：%d\n", other);
    return 0;
}
//运行结果
///123456      FWFFFFaaaaxa[][]
//空格的个数为：6
//大写英文字母的个数为：6
//小写英文字母的个数为：6
//数字的个数为：6
//其他字符的个数为：4
//
//进程已结束,退出代码0

//实验项目3：结构体
//1.工资统计
//用结构体存放下表中的数据，然后输出每人的姓名和实发工资（基本工资 + 浮动工资 - 支出）
//设计思路，任务分解等描述：（8）
//首先定义一个结构体包含名字基础工资....，在主函数中向结构体内填入数值，再使用循环进行计算。
//源代码
#include<stdio.h>
typedef struct wage
{
    char name;
    int basic_wage;
    int float_wage;
    int expend;
}wage1;
int main()
{
    int actural;
    wage1 tmp[3] = { {'Li',2200,3000,900},{'xia',3700,1800,600},{'wang',6200,2000,700} };
    for (int i = 0; i < 3; i++)
    {
        actural = tmp[i].basic_wage + tmp[i].float_wage - tmp[i].expend;
        printf("%d\n", actural);
    }

    return 0;
}
//运行结果
//4300
//4900
//7500

//2.成绩统计
//有10个学生，每个学生的数据包括学号、姓名、3门课（语文、数学、英语）的成绩，从键盘输入10个学生数据，要求打印出3门课总平均成绩，以及最高分的学生的数据（包括学号、姓名、3门课成绩、平均分数）。
//设计思路
//写个结构体，包含学号名字成绩和病菌书。主函数中使用两个循环，向循环体写入数据，再使用两个循环。小循环中计算每个学生的三科成绩和平均数！大循环每循环一次需要将三科成绩清零！！！并从中找出成绩最高的学生。
//源代码
#include<stdio.h>
//定义一个结构体
struct students
{
    char id[24];
    char name[24];
    float scores[3];
    float avr;
}stu[10];
int main()
{
    int maxi;
    float sum = 0, max = 0, average = 0;
    //向结构体内输入数据
    for (int i = 0; i < 10; i++) {
        scanf("%s %s", stu[i].id, stu[i].name);//学号和名字
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &stu[i].scores[j]);//三门课的成绩
        }
    }
    //
    for (int i = 0; i < 10; i++) {
        sum = 0;//重新计数！！
        for (int j = 0; j < 3; j++) {
            sum = sum + stu[i].scores[j];//每个学生三个科目的总成绩
            stu[i].avr = sum / 3.0;//每个学生成绩的平均数
            average += stu[i].avr;//总平均分数
        }
        //找出成绩最高的学生。
        if (sum > max) {
            max = sum;
            maxi = i;
        }
    }
    //打印成绩
    for (int i = 0; i < 10; ++i) {
        printf("%5s%10s", stu[i].id, stu[i].name);
        printf("%9.2f", stu[i].scores[0]);
        printf("    %9.2f", stu[i].scores[1]);
        printf("    %9.2f", stu[i].scores[2]);
        printf("   %8.2f\n", stu[i].avr);
    }
    printf("average=%5.2f\n", average);
    printf("最高成绩学生学号和名字： %s,%s.\n", stu[maxi].id, stu[maxi].name);
    printf("三门课的成绩和分数:%6.2f,%6.2f,%6.2f,average:%5.2f.\n", stu[maxi].scores[0], stu[maxi].scores[1], stu[maxi].scores[2], stu[maxi].avr);


    return 0;
}
//执行结果
//1 aaa 1 1 1
//2 bbb 7 8 2
//3 ccc 100 100 100
//4 jjj 88 77 88
//5 dddw 88 67 9
//7 aax 88 56 88
//8 wd 9 9 0
//9 xaw 88 66 55
//10 dddwxx 88 66 55
//11 dwd 55 67 33
//1       aaa     1.00         1.00         1.00       1.00
//2       bbb     7.00         8.00         2.00       5.67
//3       ccc   100.00       100.00       100.00     100.00
//4       jjj    88.00        77.00        88.00      84.33
//5      dddw    88.00        67.00         9.00      54.67
//7       aax    88.00        56.00        88.00      77.33
//8        wd     9.00         9.00         0.00       6.00
//9       xaw    88.00        66.00        55.00      69.67
//10    dddwxx    88.00        66.00        55.00      69.67
//11       dwd    55.00        67.00        33.00      51.67
//average=1100.33
//最高成绩学生学号和名字： 3,ccc.
//三门课的成绩和分数:100.00,100.00,100.00,average:100.00.

