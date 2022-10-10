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
