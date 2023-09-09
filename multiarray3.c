#include <stdio.h>
void main()
{
    int marks[5][5], i, j, k = 4;



   //get value from user

    for (i = 0; i <= k; i++)
    {
        printf("\n\nEnter student %d marks \n\n", i + 1);

        for (j = 0; j <= k; j++)
        {
            printf("Enter subject %d marks ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    //print value of marks

    printf("\n\n***********************************************Student 1 marks************************************** \n\n");
    for (j = 0; j <= 4;j++)
    {
        printf("Subject %d marks : %d\n", j+1,marks[0][j]);
    } 
    printf("\n\n***********************************************Student 2 marks************************************** \n\n");

    for (j = 0; j <= 4;j++)
    {
     printf("Subject 1 marks %d", marks[1][j]);
    }
    printf("\n\n***********************************************Student 3 marks************************************** \n\n");
    for (j = 0; j <= 4; j++)
    {
     printf("Subject 1 marks %d", marks[2][j]);
    }
    printf("\n\n***********************************************Student 4 marks************************************** \n\n");

    for (j = 0; j <= 4; j++)
    {
     printf("Subject 1 marks %d", marks[3][j]);
    }
    printf("\n\n***********************************************Student 5 marks************************************** \n\n");
    for (j = 0; j <= 4; j++)
    {
     printf("Subject 1 marks %d", marks[4][j]);
    }
}

// printf("Subject 2 marks : %d\n", marks[0][1]);
// printf("Subject 3 marks : %d\n", marks[0][2]);
// printf("Subject 4 marks : %d\n", marks[0][3]);
// printf("Subject 5 marks : %d\n", marks[0][4]);