#include<stdio.h>
int main()
{
    int x,y,z,i,j,k;
    int A[10];
    printf("\nenter the number of element");
    scanf("%d",&x);
    for(i = 0;i < x;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i = 0;i < x;i++)
    {
        for(j = i;j < x;j++)
        {
            if(A[i] + A[j] == 50)
            {
                printf("\n(%d,%d)",A[i],A[j]);
            }
        }
    }
    return 0;
}
