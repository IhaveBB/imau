//���˼·��������10��
//ͨ����n��ʣ1�����ӣ����Ƶ�һ��ʣ������

//Դ���룺��10�֣�
#include<stdio.h>
int main()
{
    int m = 1, n;
    //mλ��һ��ժ����������
    //n�Ͷ���������ʣ��һ��
    printf("Input days:\n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        m = (m + 1) * 2;
    }
    printf("x=%d\n", m);
    return 0;
}
//ִ�н��(���Բ�ͬ��֧���)����5�֣�
//Input days:
//5
//x=46
//Input days:
//10
//x=1534


//���˼·��������10��
//���ȵ�֪������-1�����������Կ���ʹ��while��ѭ������if break��䡣ż��%2==0��������֮�����ô��������жϡ�����ż���ĸ������Զ�������������Ƕ��������if����У����е�����
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
//�����ѽ���,�˳�����0


//���˼·��������10��
//�����֪������0~9�����֣�������Ҫʹ��if else�����жϡ��û��������ֺ󣬷��ز���ʾ�ڼ�λ�����Զ���һ����������������Ȼ��������ﵽ��ʾ�ڼ�λ��Ч����Ȼ��ʹ��do whileѭ�����ж��Ƿ����뵽6λ��
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

//ִ�н��(���Բ�ͬ��֧���)����5�֣�
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
//�����ѽ���,�˳�����0
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
    printf("��n�η��������������ף�%0.3f", s);
    printf("��n�εķ����߶ȣ�%0.3f", rh);
    return 0;
}

//ִ�н��(���Բ�ͬ��֧���)����5�֣�
//Input:
//10
//��n�η��������������ף�299.609��n�εķ����߶ȣ�0.098
//Input:
//15
//��n�η��������������ף�299.988��n�εķ����߶ȣ�0.003
