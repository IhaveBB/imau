#include<stdio.h>
int max(int a[], int len)
{
    int maxid = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] > a[maxid])
            maxid = i;
    }
    return maxid;
}

int main()
{
    printf("请输入要排序数字的数量");
    int len;
    scanf("%d", &len);
    int a[len];
    printf("请输入对应数量的数字")
        for (int x = 0; x < len; x++)
        {
            scanf("%d", &a[x]);
        }

    for (int i = len - 1; i > 0; i--)
    {
        int maxid = max(a, i + 1);   //求出数组中最大数的位置
        int t = a[maxid];     //让最大值等于t
        a[maxid] = a[i];    //把数组中的最后一位，放到求出最大值的地方。
        a[i] = t;       //把求出的最大值挪到最后一位
    }
    for (int z = 0; z < len; z++)
    {
        printf("%d ", a[z]);
    }

    return 0;
}