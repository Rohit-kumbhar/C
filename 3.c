#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z,a = 0,b,i,j,k,A[20];
    char B[50];
    printf("\n enter any text (only small case)");
    gets(B);
   // puts(B);
   for(i = 0;B[i] != '\0';i++)
   {
      // printf("\n entered");
       if(B[i] == 'a'|| B[i] == 'i'||B[i] == 'e'|| B[i] == 'o'|| B[i] == 'u')
       {
           a++;
       }
   }
    printf("\n number of vowels are %d",a);
    return 0;
}
