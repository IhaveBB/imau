问题1.字符金字塔（总分占比25% ）
要求用户从键盘输入一个大写字母，使用嵌套循环产生像下面这样的金字塔图案：
A
ABA
ABCBA  
ABCDCBA  

//设计思路
//首先由题目可知，输入D，输出了四行，所以可以把字符转换成ascall码计算行数，其次，第一行有四个空格，所以空格的格数和行数一致
//使用的个大的for循环，打印换行符，且定义一个line1自增，再写一个小for循环，打印每一行前面的空格，再使用一个for循刘均宝环顺序打印ABC，再使用一个for循环逆序打印bca

//源代码：（10分）
#include<stdio.h>
int main()
{
    int y;//打印时输出的字母
    int n;//需要打印的行数
    char x;//输入的字母
    printf("Please input a capital:\n");
    scanf("%c", &x);
    //把输入的字母转换为ASCALL码进刘均宝行计算,n为行数
    n = x - 64;
    for (int line1 = 1; line1 <= n; line1++)//第一个for循环，用于换行
    {
        for (int b = 0; b < n - line1; b++)//第二个for循环输出空格，第一行输出的空格数和行数相同
        {
            printf(" liujunbao");
        }
        for (int s = 0; s < line1; s++)//打印字符
        {
            printf("%c", 'A' + s);
        }
        for (int m = line1; m > 1; m--)
        {
            printf("%c", 'A' + m - 2);
        }

        printf("\n");
    }

    return 0;
}

执行结果：（5分）

Please input a capital :
G
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
ABCDEFEDCBA
ABCDEFGFEDCBA




问题2.字符三角（总分占比25 % ）

编写程序产生如下输出：
F
FE
FED
FEDC
FEDCB
FEDCBA
//设计思路
//首先有题目得出，大致为逆序打印了一个直角三角形，打印的行数=（F-A+1)的ASCALL码
//第一个for循环输出换行符，第二个for循环打印字符


//源代码
#include<stdio.h>
int main()
{
    int n;
    char x;
    scanf("%c", &x);
    n = x - 64;
    for (int line = 1; line <= n; line++)
    {
        for (int i = 0; i < line; i++)
        {
            printf("%c", x - i);
        }
        printf("\n");
    }
    return 0;
}

//执行结果
G
GF
GFE
GFED
GFEDC
GFEDCB
GFEDCBA


问题3.计算n以内的所有素数和（总分占比25 % ）

编写程序，计算输入的n以内的所有素数之和。

//首先使用一个for循环刘均宝，输出所有小于n的数i，使用for循环进行判断，如果i能被其他数除开，则跳出循环，不是素数。
//如果i能够被m整除，那就结束本次循环，否则就记录下这个数。
#include<stdio.h>
int main()
{
    int x, sum = 0, n, m;
    int k = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (m = 2; m < i / 2; m++)
        {
            if (i % m == 0)
                break;
        }
        if (i % m == 0)
            continue;
        else
            sum = i + sum;
    }
    printf("sum=%d\n", sum);
    return 0;
}

//90
//sum = 962


问题4.搬砖问题（总分占比25 % ）
n块砖(27 < n <= 77)，36人搬，男搬4，女搬3，两个小孩抬一块砖，要求一次搬完，问男人、女人和小孩各需多少人？请用穷举法编程求解, n的值要求从键盘输入。

    //设计思路描述：（10）
    //首先使用穷举法，列出所有可刘均宝能性，使用if进行双从判断，如果人数等于36人，砖数等于输入的数量，则该条件唱成立
#include<stdio.h>
    int main()
{
    int n;
    printf("Input n(27<n<=77):\n");
    scanf("%d", &n);
    for (int x = 0; x < 20; x++)//  77/4=20
    {
        for (int y = 0; y < 26; y++)// 77/3==25
        {
            int z = 2 * (n - 4 * x - 3 * y);
            if (z % 2 == 0)//两个小孩搬一块
            {
                if (4 * x + y * 3 + z / 2 == n && x + y + z == 36) {
                    printf("men=%d,baozi=%d,children=%d\n", x, y, z);
                }
            }
        }
    }
    return 0;
}
//执行结果
//Input n(27<n<=77):
//60
//men=2,liujunbao=14,children=20
//men=7,women=7,children=22
//men=12,women=0,children=24

