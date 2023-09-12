#include <stdio.h>
void printsymbol(int n,char s)
{
    int i;
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        printf("%c", s);
    }
    printf("\n");
}
void main()
{
    int num;
    char symbol;

    printf("Enter Symbol ");
    scanf("%c", &symbol);
    printf("Enter number ");
    scanf("%d", &num);
    printsymbol(num, symbol);

    printf("\nName : Belim sahil \n");
    
    printsymbol(num,symbol);

    printf("\nAge : 18\n");

    printsymbol(num, symbol);

    printf("\nWeight : 45.36\n");
 
    printsymbol(num, symbol);
  
    

}