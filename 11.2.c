����1.�ַ����������ܷ�ռ��25% ��
Ҫ���û��Ӽ�������һ����д��ĸ��ʹ��Ƕ��ѭ�����������������Ľ�����ͼ����
A
ABA
ABCBA  
ABCDCBA  

//���˼·
//��������Ŀ��֪������D����������У����Կ��԰��ַ�ת����ascall�������������Σ���һ�����ĸ��ո����Կո�ĸ���������һ��
//ʹ�õĸ����forѭ������ӡ���з����Ҷ���һ��line1��������дһ��Сforѭ������ӡÿһ��ǰ��Ŀո���ʹ��һ��forѭ��������˳���ӡABC����ʹ��һ��forѭ�������ӡbca

//Դ���룺��10�֣�
#include<stdio.h>
int main()
{
    int y;//��ӡʱ�������ĸ
    int n;//��Ҫ��ӡ������
    char x;//�������ĸ
    printf("Please input a capital:\n");
    scanf("%c", &x);
    //���������ĸת��ΪASCALL����������м���,nΪ����
    n = x - 64;
    for (int line1 = 1; line1 <= n; line1++)//��һ��forѭ�������ڻ���
    {
        for (int b = 0; b < n - line1; b++)//�ڶ���forѭ������ո񣬵�һ������Ŀո�����������ͬ
        {
            printf(" liujunbao");
        }
        for (int s = 0; s < line1; s++)//��ӡ�ַ�
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

ִ�н������5�֣�

Please input a capital :
G
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
ABCDEFEDCBA
ABCDEFGFEDCBA




����2.�ַ����ǣ��ܷ�ռ��25 % ��

��д����������������
F
FE
FED
FEDC
FEDCB
FEDCBA
//���˼·
//��������Ŀ�ó�������Ϊ�����ӡ��һ��ֱ�������Σ���ӡ������=��F-A+1)��ASCALL��
//��һ��forѭ��������з����ڶ���forѭ����ӡ�ַ�

//Դ����
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

//ִ�н��
G
GF
GFE
GFED
GFEDC
GFEDCB
GFEDCBA


����3.����n���ڵ����������ͣ��ܷ�ռ��25 % ��

��д���򣬼��������n���ڵ���������֮�͡�

//����ʹ��һ��forѭ�����������������С��n����i��ʹ��forѭ�������жϣ����i�ܱ�������������������ѭ��������������
//���i�ܹ���m�������Ǿͽ�������ѭ��������ͼ�¼���������
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


����4.��ש���⣨�ܷ�ռ��25 % ��
n��ש(27 < n <= 77)��36�˰ᣬ�а�4��Ů��3������С��̧һ��ש��Ҫ��һ�ΰ��꣬�����ˡ�Ů�˺�С����������ˣ�������ٷ�������, n��ֵҪ��Ӽ������롣

    //���˼·��������10��
    //����ʹ����ٷ����г����п����������ԣ�ʹ��if����˫���жϣ������������36�ˣ�ש������������������������������
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
            if (z % 2 == 0)//����С����һ��
            {
                if (4 * x + y * 3 + z / 2 == n && x + y + z == 36) {
                    printf("men=%d,baozi=%d,children=%d\n", x, y, z);
                }
            }
        }
    }
    return 0;
}
//ִ�н��
//Input n(27<n<=77):
//60
//men=2,liujunbao=14,children=20
//men=7,women=7,children=22
//men=12,women=0,children=24

