#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z,a,b,c,i,j,k;
    char A[100];
    printf("\n enter your address");
    gets(A);
    for(i = 0;A[i] != '\0';i++)
    {
        if(A[i] == ',')
        {
            printf("\n");
        }
        else
        {
            printf("%c",A[i]);
        }
    }
    return 0;
}
