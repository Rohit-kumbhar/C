#include<stdio.h>
int main()
{
    int x,y,z,m,n,i,j;
    printf("\nenter the numbers for  m and n");
    scanf("%d%d",&m,&n);
    for(i = m;i <= n;i++)
    {
        if(i % 2 != 0)
        {
            printf("\n%d",i);
        }
    }
    return 0;
}
