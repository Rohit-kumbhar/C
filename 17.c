#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z,i,j,k;
    char c = NULL;
    while(1)
    {
        printf("\nenter a charector");
        scanf("%c",&c);
        if(c == '*')
        {
            return 0;
        }
        else
        {
            if(c < 97)
            {
                printf("\nchar = %c, asci = %d,expo = %c",c,c,c+32);

            }
            else
            {
                    printf("\nchar = %c, asci = %d,expo = %c",c,c,c-32);
            }
        }
    }
    //printf("%d->%d %d->%d",'a','b','A','B');

    return 0;
}
