#include<stdio.h>
int main()
{
    int x,y,z,i,j,k;
    int A[20][20];
    int sum = 0;
    printf("\nenter the value of x and y");
    scanf("%d%d",&x,&y);
    for(i = 0;i < x;i++)
    {
        for(j = 0;j < y;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nthe matrix you entered is:\n");
    for(i = 0;i < x;i++)
    {
        for(j = 0;j < y;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    for(i = 0;i < x;i++)
    {
        sum = sum + A[i][i];
    }
    printf("\n the required sum is %d",sum);
    return 0;
}
