#include<stdio.h>
void main()
{
    int marks[5][5],i,j,k=4;


    for (i = 0; i <= k;i++)
    {
        printf("\n\nEnter student %d marks \n\n",i+1);

        for (j = 0; j <= k; j++)
        {
            printf("Enter subject %d marks ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
   
}
    // printf("Enter subject 1 marks ");
    // scanf("%d", &marks[0][0]);
    // printf("Enter subject 2 marks ");
    // scanf("%d", &marks[0][1]);
    // printf("Enter subject 3 marks ");
    // scanf("%d", &marks[0][2]);
    // printf("Enter subject 4 marks ");
    // scanf("%d", &marks[0][3]);
    // printf("Enter subject 5 marks ");
    // scanf("%d", &marks[0][4]);

// printf("Enter student 2 marks \n\n");
// for (i = 0; i <= 4; i++)
// {
//     printf("Enter subject %d marks ", i + 1);
//     scanf("%d", &marks[1][i]);
// }

// printf("Enter student 3 marks \n\n");
// for (i = 0; i <= 4; i++)
// {
//     printf("Enter subject %d marks ", i + 1);
//     scanf("%d", &marks[2][i]);
// }

// printf("Enter student 4 marks \n\n");

// for (i = 0; i <= 4; i++)
// {
//     printf("Enter subject %d marks ", i + 1);
//     scanf("%d", &marks[3][i]);
// }

// printf("Enter student 5 marks \n\n");
// for (i = 0; i <= 4; i++)
// {
//     printf("Enter subject %d marks ", i + 1);
//     scanf("%d", &marks[4][i]);
// }