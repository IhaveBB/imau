//设计思路描述：（10）
//通过第n天剩1个桃子，反推第一天剩余数量

//源代码：（10分）
#include<stdio.h>
int main()
{
    int m = 1, n;
    //m位第一天摘的桃子数量
    //n低多少天桃子剩下一个
    printf("Input days:\n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        m = (m + 1) * 2;
    }
    printf("x=%d\n", m);
    return 0;
}
//执行结果(测试不同分支结果)：（5分）
//Input days:
//5
//x=46
//Input days:
//10
//x=1534


//设计思路描述：（10）
//首先得知，输入-1结束程序，所以可以使用while死循环加上if break语句。偶数%2==0，奇数反之，可用此来进行判断。奇数偶数的个数可以定义两个变量，嵌套在两个if语句中，进行递增。
#include<stdio.h>
int main()
{
    int x, odd = 0, even = 0;
    while (1)
    {
        printf("Please enter the number:\n");
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            printf("even\n");
            even++;
        }
        else
        {
            printf("odd\n");
            odd++;
        }
        if (x == -1) {
            printf("The total number of odd is %d\n", odd - 1);
            printf("The total number of even is %d", even);
            break;
        }
    }
    return 0;
}
//Please enter the number:
//1
//odd
//        Please enter the number:
//3
//odd
//        Please enter the number:
//5
//odd
//        Please enter the number:
//7
//odd
//        Please enter the number:
//9
//odd
//        Please enter the number:
//2
//even
//        Please enter the number:
//4
//even
//        Please enter the number:
//6
//even
//        Please enter the number:
//8
//even
//        Please enter the number:
//10
//even
//        Please enter the number:
//-1
//odd
//        The total number of odd is 5
//The total number of even is 5
//进程已结束,退出代码0


//设计思路描述：（10）
//由题可知，输入0~9的数字，所以需要使用if else进行判断。用户输入数字后，返回并提示第几位，可以定义一个变量进行自增，然后输出，达到提示第几位的效果。然后使用do while循环，判断是否输入到6位。
#include<stdio.h>
int main() {
    char x;
    int count = 0;
    int i = 0;
    do
    {
        printf("Input your password:\n");
        scanf("%c", &x);
        if (x >= '0' && x <= '9')
        {
            count++;
            printf("%c:you have enter %d-bits number\n", x, count);
        }
        else
        {
            printf("error\n");
        }
        getchar();
    } while (count < 6);
    return 0;
}

//执行结果(测试不同分支结果)：（5分）
//Input your password:
//a
//        error
//Input your password:
//x
//        error
//Input your password:
//1
//1:you have enter 1-bits number
//Input your password:
//2
//2:you have enter 2-bits number
//Input your password:
//3
//3:you have enter 3-bits number
//Input your password:
//4
//4:you have enter 4-bits number
//Input your password:
//5
//5:you have enter 5-bits number
//Input your password:
//6
//6:you have enter 6-bits number
//
//进程已结束,退出代码0
//
#include<stdio.h>
int main()
{
    float h = 100;
    float rh = 50, s = 0;
    int n;
    printf("Input:\n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        s = s + 2 * rh;
        rh = rh / 2;
    }
    s = s + 100;
    printf("第n次反弹共经过多少米：%0.3f", s);
    printf("第n次的反弹高度：%0.3f", rh);
    return 0;
}

//执行结果(测试不同分支结果)：（5分）
//Input:
//10
//第n次反弹共经过多少米：299.609第n次的反弹高度：0.098
//Input:
//15
//第n次反弹共经过多少米：299.988第n次的反弹高度：0.003
