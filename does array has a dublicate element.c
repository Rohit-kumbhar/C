#include<stdio.h>
int main()
{
    int x,y,z,i,j,k;
    int A[20];
    printf("\nenter the nmber of elements");
    scanf("%d",&x);
    for(i = 0;i < x;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i = 0;i < x;i++)
    {
        for(j = i;j < x;j++)
        {
            if(A[i] == A[j] && i != j)
            {
                printf("\n dublicate : %d",A[j]);
            }
        }
    }
    return 0;
}
