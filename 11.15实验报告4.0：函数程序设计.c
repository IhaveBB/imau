//22�������� ������ 2022122100848
//����1.����׳˺��������ܷ�ռ��20% ��
//����������һ����λ��m�����λ��ʮλ�͸�λ���ֱַ���a��b��c�����m = a!+ b!+ c!���������λ���ͳ�Ϊ��λ�׳˺�����Լ��0 != 1�������̼��㲢������е���λ�׳˺��������ܷ�ռ��25 % ��

//���˼·�����ȴ���һ������׳˵ĺ������������Ҫ��������е���λ�׳˺���������ʹ����ٷ��г����п��ܵ����������ó��׳˺�����m�����жϣ���ͬ�����

//Դ����
#include<stdio.h>
//�����׳˺���
long Fact(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}
//������
int main()
{
    int n, m;
    //��ٷ������г�ȫ�����ܵ���
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
//ִ�н��
//145


//����2.������ĸ�����������ܷ�ռ��20% ��
//Ҫ���û��Ӽ�������һ����д��ĸ��ʹ��Ƕ��ѭ�����������������Ľ�����ͼ�������ܷ�ռ��25%
//���˼·
//���Ƚ��������ĸͨ��ascii��ת���ɶ�Ӧ�����������ʹ��forѭ������ѭ����ӡ����һ��forѪ����ӡ���з������forѭ������ո�������������ӡABCD����������

//Դ����
#include<stdio.h>
int main()
{
    int line_number;//����
    char x;//�����ַ�
    scanf("%c", &x);
    line_number = x - 64;//ASCII�����
    for (int n = 1; n <= line_number; n++)      //��ӡ���з�
    {
        for (int k = 1; k <= line_number - n; k++) //��ӡ�ո�
            printf(" ");
        for (int m = 0; m < n; m++)
            printf("%c", 65 + m);
        for (int b = n; b > 1; b--)
            printf("%c", 65 + b - 2);
        printf("\n");
    }
    return 0;
}

//�������
G
      A
     ABA 
    ABCBA
   ABCDCBA
  ABCDEDCBA
 ABCDEFEDCBA
ABCDEFGFEDCBA




//����3.����̩�ռ�������sinx��ֵ�����ܷ�ռ��20% ��
//���˼·
//���ȴ���һ������׳˺��ݴη��ĺ����������������е���

//Դ����
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
//����sin
void sinx(double x) {
    int sign = 1;//�����ű�ʶ��
    int count = 1;//���ڼ���
    double fraction, sinx = x;
    int i = 1;
    do {
        count++;  //����
        i = i + 2;
        sign = -sign;//�������л�
        fraction = pow_n(x, i) / Fact(i);//����ÿ����ĸ
        fraction = fraction * sign;
        sinx = sinx + fraction;
    } while (fabs(fraction) >= 1e-5);
    printf("sin(x)=%.3f,count=%d\n", sinx, count);
}
//�׳�
double Fact(double n)
{
    double result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}
//�Զ���pow����x��n����
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
//ִ�н��Input x:
//20
//sin(x) = 0.913, count = 32



//����4. ����100~200֮�����������֮�͡����ܷ�ռ��20%��
//�����¼�����ȴ���һ���ж������ĺ������ܱ���ȥ�����1���������Ͳ�����������֮�����������ڴ�������������ʹ��forѭ�����ж�100~200֮���������

//Դ����
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

//��������
int is_prime(int x) {
    for (int i = 2; i < x; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}


//ִ�н��
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





//����5.���ʵ��һ������ָ����Χ�ڵ������ĺ��������ܷ�ռ��20% ��
//���ʵ��һ������ָ����Χ�ڵ������ĺ���getint���������ĺ���ԭ��Ϊ��int getint(int min, int max); ������������û������������֤����֤���յ�һ����һ������min��max֮�䣨[min, max]�����ڣ���һ����������󷵻ظ�����������û����벻�Ϸ��������ʾ�������룬ֱ������Ϸ�ʱΪֹ��Ҫ���д�����ĳ���
////���˼·
//���ȴ���һ��getinnt�����������ж�����������Ƿ��ڷ�Χ�ڣ��������������롣�����������������ֵ��Сֵ���������getint���������ж�
//Դ����
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

//ִ�н��
//"Please enter min,max:
//3 100
//Please enter an integer [3..100]:
//3333
//Please enter an integer [3..100]:
//22
//The integer you have entered is:22
