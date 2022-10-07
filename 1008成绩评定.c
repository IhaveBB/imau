// 给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。 90分以及90分以上为A，80-89分为B，70-79分为C，60-69分为D，60分以下为E。
#include<stdio.h>
int main()
{
    int scores;
    scanf("%d", &scores);
    if(90<=scores&&scores<=100)
    printf("A");
    if(80<scores&&scores<89)
    printf("B");
    if(70<scores&&scores<79)
    printf("C");
    if(60<scores&&scores<69)
    printf("D");
    if(scores<60)
    printf("E");
    return 0;
}