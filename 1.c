#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,i,j = 0,k,flag = 0,A[20];
    printf("\nEnter ten numbers");
    for(i = 0;i < 10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i = 0;i < 10;i++)
    {
        if(flag == 3)
        {
            printf("\n");
            flag = 0;
        }
            printf("%d,",A[i]);
            flag++;
    }
    return 0;
}
