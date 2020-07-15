#include<stdio.h>
int main()
{
    int x,y,z,a,b,i,j,k,A[20],B[20];
    int sum = 0,count = 0;
    for(i = 1;i <= 200;i++)
    {
        if(i % 2 == 0)
        {
            count++;
            printf("\n %d",i);
            sum = sum + i;
        }
    }
    printf("\nthe total number of evens is %d",count);
    printf("\nthe total sum is %d",sum);
    return 0;
}
