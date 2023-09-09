#include <stdio.h>
void main()
{
    int marks[5][5], i, j, k = 4, total[5];
    float avg[5];

    printf("Enter marks 1 to 100 \n\n");
    // get value from user

    for (i = 0; i <= k; i++)
    {
        printf("\n\nEnter student %d marks \n\n", i + 1);

        for (j = 0; j <= k; j++)
        {
            printf("Enter subject %d marks ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // print value of marks
    for (i = 0; i <= 4; i++)
    {
        printf("\n\n***********************************************Student %d marks************************************** \n\n", i + 1);
        for (j = 0; j <= 4; j++)
        {
            printf("Subject %d marks : %d\n", j + 1, marks[i][j]);
        }
        total[i] = marks[i][0] + marks[i][1] + marks[i][2] + marks[i][3] + marks[i][4];
        avg[i] = total[i] / 5;
        printf("Total marks     : %d\n", total[i]);
        printf("Avrege          : %.3f", avg[i]);
    }

    if (avg[0] > avg[1] && avg[0] > avg[2] && avg[0] > avg[3] && avg[0] > avg[4])
    {
        printf("\nStudent 1 have heighest  marks \n");
    }
    else if (avg[1] > avg[0] && avg[1] > avg[2] && avg[1] > avg[3] && avg[1] > avg[4])
    {
        printf("\nStudent 2 have heighest  marks \n");
    }
    else if (avg[2] > avg[0] && avg[2] > avg[1] && avg[2] > avg[3] && avg[2] > avg[4])
    {
        printf("\nStudent 3 have heighest  marks \n");
    }
    else if (avg[3] > avg[0] && avg[3] > avg[2] && avg[3] > avg[1] && avg[3] > avg[4])
    {
        printf("\nStudent 4 have heighest  marks \n");
    }
    else if (avg[4] > avg[0] && avg[4] > avg[2] && avg[4] > avg[3] && avg[4] > avg[1])
    {
        printf("\nStudent 5 have heighest  marks \n");
    }
}
