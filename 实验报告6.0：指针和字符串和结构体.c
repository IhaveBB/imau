//2022122100848 ���������� ������
//ʵ����Ŀ1��ָ����ϰ
//1.��д�Զ��庯��ʵ�ֽ�������������ֵ��
//��д����void swap��int * pa, int* pb����������������ֵ����������������3��������ͨ������swap������ʵ�ֽ�3��������С�����˳�������
//���˼·
//���ȱ�дswap������ʹ��ָ�뽻������������ֵ����Ϊ���ʹ��a=b�Ļ������������βΣ��޷�������������Ч��������Ҫʹ��ָ�롣����������������Ϊ������֤���С�������������ʹ��swap�����Դ��ж���������
//Դ����
#include<stdio.h>
void swap(int* pa, int* pb);
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    swap(&a, &b);//ִ�к�aΪС��bΪ��
    swap(&b, &c);//ִ�к�bΪС��cΪ��
    swap(&a, &b);//ִ�к�aΪС��bΪ��
    printf("%d %d %d", a, b, c);

    return 0;
}

void swap(int* pa, int* pb)
{
    //��С��������ǰ��
    if (*pa > *pb) {
        int tmp = *pa;
        *pa = *pb;
        *pb = tmp;
    }
}
//ִ�н������2�֣�
//77 88 22
//22 77 88


//2.��ָ�뷽��ʵ��3��������
//���������ַ���������С����� ˳���������ָ����ʵ��
//Դ����
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
    //strcmp������str1=str2����0��str1>str2��������
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
//ִ�н��
//�����������ַ���:
//axxx
//xxxxx
//aaaadwd
//�����С��������õ������ַ���:aaaadwd  axxx    xxxxx

//ʵ����Ŀ2��ָ�����ַ���
//1.ͳ���ַ����еĸ����ַ�������
//����һ�������ո���ַ�������ָ�뷽��ͳ�����д�д��ĸ��Сд��ĸ�����֡��ո������ַ��ĸ�����
//�����¼
//ʹ��ascall������ж��Ǻ����ַ��������鸳ֵ��ָ�룬ʹ��for����ѭ���жϡ�
//Դ����
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
            if (*p != '\n') {//��Ϊfgets()��������ĩβ�Զ�����\n��Ӱ���жϽ������Ҫ�ж��Ƿ�Ϊ���з�
                other += 1;
            }
        }
    }
    printf("�ո�ĸ���Ϊ��%d\n", space);
    printf("��дӢ����ĸ�ĸ���Ϊ��%d\n", capital);
    printf("СдӢ����ĸ�ĸ���Ϊ��%d\n", capital);
    printf("���ֵĸ���Ϊ��%d\n", number);
    printf("�����ַ��ĸ���Ϊ��%d\n", other);
    return 0;
}
//���н��
///123456      FWFFFFaaaaxa[][]
//�ո�ĸ���Ϊ��6
//��дӢ����ĸ�ĸ���Ϊ��6
//СдӢ����ĸ�ĸ���Ϊ��6
//���ֵĸ���Ϊ��6
//�����ַ��ĸ���Ϊ��4
//
//�����ѽ���,�˳�����0

//ʵ����Ŀ3���ṹ��
//1.����ͳ��
//�ýṹ�����±��е����ݣ�Ȼ�����ÿ�˵�������ʵ�����ʣ��������� + �������� - ֧����
//���˼·������ֽ����������8��
//���ȶ���һ���ṹ��������ֻ�������....��������������ṹ����������ֵ����ʹ��ѭ�����м��㡣
//Դ����
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
//���н��
//4300
//4900
//7500

//2.�ɼ�ͳ��
//��10��ѧ����ÿ��ѧ�������ݰ���ѧ�š�������3�ſΣ����ġ���ѧ��Ӣ��ĳɼ����Ӽ�������10��ѧ�����ݣ�Ҫ���ӡ��3�ſ���ƽ���ɼ����Լ���߷ֵ�ѧ�������ݣ�����ѧ�š�������3�ſγɼ���ƽ����������
//���˼·
//д���ṹ�壬����ѧ�����ֳɼ��Ͳ����顣��������ʹ������ѭ������ѭ����д�����ݣ���ʹ������ѭ����Сѭ���м���ÿ��ѧ�������Ƴɼ���ƽ��������ѭ��ÿѭ��һ����Ҫ�����Ƴɼ����㣡�����������ҳ��ɼ���ߵ�ѧ����
//Դ����
#include<stdio.h>
//����һ���ṹ��
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
    //��ṹ������������
    for (int i = 0; i < 10; i++) {
        scanf("%s %s", stu[i].id, stu[i].name);//ѧ�ź�����
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &stu[i].scores[j]);//���ſεĳɼ�
        }
    }
    //
    for (int i = 0; i < 10; i++) {
        sum = 0;//���¼�������
        for (int j = 0; j < 3; j++) {
            sum = sum + stu[i].scores[j];//ÿ��ѧ��������Ŀ���ܳɼ�
            stu[i].avr = sum / 3.0;//ÿ��ѧ���ɼ���ƽ����
            average += stu[i].avr;//��ƽ������
        }
        //�ҳ��ɼ���ߵ�ѧ����
        if (sum > max) {
            max = sum;
            maxi = i;
        }
    }
    //��ӡ�ɼ�
    for (int i = 0; i < 10; ++i) {
        printf("%5s%10s", stu[i].id, stu[i].name);
        printf("%9.2f", stu[i].scores[0]);
        printf("    %9.2f", stu[i].scores[1]);
        printf("    %9.2f", stu[i].scores[2]);
        printf("   %8.2f\n", stu[i].avr);
    }
    printf("average=%5.2f\n", average);
    printf("��߳ɼ�ѧ��ѧ�ź����֣� %s,%s.\n", stu[maxi].id, stu[maxi].name);
    printf("���ſεĳɼ��ͷ���:%6.2f,%6.2f,%6.2f,average:%5.2f.\n", stu[maxi].scores[0], stu[maxi].scores[1], stu[maxi].scores[2], stu[maxi].avr);


    return 0;
}
//ִ�н��
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
//��߳ɼ�ѧ��ѧ�ź����֣� 3,ccc.
//���ſεĳɼ��ͷ���:100.00,100.00,100.00,average:100.00.

