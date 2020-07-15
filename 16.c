#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z,i,j,k;
    char C[100],*p,a;
    printf("\nenter a string");
    gets(C);
    p = &C;
    for(i = 0;C[i] != '\0';i++)
    {
        printf("%c",*p);
        p = p + 1;
    }
    return 0;
}
