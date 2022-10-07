#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b>c||a>c&&c>b)
    {
        printf("%d",a);
    }
    else if(b>a&&a>c||b>c&&c>a)
    {
        printf("%d",b);
    }
    else if(c>b&&b>a||c>a&&a>b)
    {
        printf("%d",c);
    }
    else if(a>=b&&b<=a)
    {
        printf("%d",a);
    }

    return 0;
}
