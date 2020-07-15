#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,i,j,n,k;
    int A[30];
    printf("\nenter the number of elememts ");
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            for(k = 0;j < n;k++)
            {
                if(A[i]+A[j]+A[k] == 0)
                {
                    printf("\n(%d,%d,%d)",A[i],A[j],A[k]);
                }
            }
        }
    }
    return 0;
}
