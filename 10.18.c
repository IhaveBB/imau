//22计科5班  刘均宝
//1.首先创建2个数组，分别写入每个区域的起送费用和续重费用
//2.0使用scanf函数接受用户输入的区域编码和重量。当用户输入地区编码后，使用if语句，判断地区编码是否在0~4范围内和重量是否大于0，是则进行下一步，不是则报错。
//3.设置area等于用户输入的区域编码。则价价格计算方法如下：
//3.①：不足一公斤，则邮费=StarMoney[area]
//3.②，超过一公斤，则邮费等=StarMoney[area]+OverMoney[area]*cell（用户输入重量-1）

#include<stdio.h>
#include <math.h>
int main()
{
    //定义两个数组，存储不同信息的起送价格和超重时每公斤的价格。
    int starMoney[5] = { 10,10,15,15,15 };
    float overMoney[5] = { 3,4,5,6.5,10 };
    int area = 0;
    float weight, StarWeight, overWeight, price = 0;
    printf("0区；上海\n1区；江苏，浙江\n2区；北京w，天津，河北，辽宁，河南，安微，陕西，湖北，江西，湖南，福建，广东，山西。\n3区；吉林，辽宁，甘肃，四川，重庆，青海，广西，云南，海南，刘均宝，内蒙古，黑龙江，贵州。\n4区；新疆，西藏\n");
    printf("Please input area number and weight");
    scanf("%d %f", &area, &weight);
    //判断用户输入信息是否争取，错误直接终止运行并输出提示信息。
    if ((0 <= area && area <= 4) && (0 < weight))
    {
        //分情况判断，当重量小于等于一公斤时。
        if (weight <= 1)
        {
            price = starMoney[area];
            printf("Price:%5.2f\n", price);
        }
        //分情况判断，当重量大于一公斤时。
        else if (weight > 1)
        {
            //ceil向上取证，存储在<math.h>中，需调用。
            overWeight = ceil(weight - 1);
            price = starMoney[area] + overMoney[area] * overWeight;
            printf("Price:%5.2f\n", price);
        }


    }
    else
    {
        printf("Error in ljb\nPrice:  0.00");
    }

    return 0;
}

//测试结果：
//输入：0 1  结果：10.00
//输入：0 18 结果：61.00
//输入：2 3.5 结果：0.00 ERROR
//输入：4 4.5 结果：55.00
//输入：3 188 结果：1230.00
//输入：2 0.1 结果：15.00