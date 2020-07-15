#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char A[50];
int big = 0;
pal(int i,int j)
{
    int a,b;
    int y;
    for(a = i;a <= j;a++)
    {
        for(b = j;b != -1;b--)
        {
            if(A[a] != A[b])
            {
                y = -1;
                return 0;
            }
            printf("\n");
            if(big < (j - i))
            {
                big = j - i;
                for(a = i;a <= j;a++)
                {
                    printf("%c",A[a]);
                }
            }
        }
    }
    return 0;
}
int main()
{
    int x,y,z,i,j,k;
    int big = 0,n;
    printf("\nenter any string");
    gets(A);
    n = strlen(A);
    for(i =0;i < n;i++)
    {
        for(j = i;j < n;j++)
        {
            pal(i,j);
        }
    }
    return 0;
}
