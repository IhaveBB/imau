#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct {
        char name[20];
        int gender;
        double height;
        double weight;
    } arr[10];

    int NumOfPerson = 0;
    while (1)
    {
        system("cls");
        printf("1.input person information\n");
        printf("2.display person information\n");
        printf("3.exit");
        int input;
        scanf("%d", &input);
        system("cls");
        if (input == 1)
        {
            printf("input name gender height weight\n");
            scanf("%s %d %lf %lf", arr[NumOfPerson].name, &arr[NumOfPerson].gender, &arr[NumOfPerson].height,
                  &arr[NumOfPerson].weight);
            NumOfPerson++;
        }
        else if (input == 2)
        {
            printf("display personal information\n");
            printf("name gender height weight ;\n");
            for (int i = 0; i < NumOfPerson; i++)
            {
                printf("%s %d %.2f %.2f\n", arr[i].name, arr[i].gender, arr[i].height, arr[i].weight);
            }
            system("pause");
        }
        else {
            break;
        }
    }
    return 0;
}
