#include<stdio.h>
int main()
{
    int x,y,z,i,j = 0,k;
    int A[20];
    printf("\nenter how many number you want to enter");
    scanf("%d",&x);
    for(i = 0;i < x;i++)
    {
        scanf("%d",&A[i]);
    }
    y = A[0];
    for(i = 0;i < x;i++)
    {
        if(i == 0 && y < A[i+1])
        {
            printf("\n%d",A[0]);
            y = A[i];
        }
        if(y < A[i])
        {

           // j++;
            printf("\n%d",A[i]);
            y = A[i];
        }
       // y = A[i];
    }
    return 0;
}
