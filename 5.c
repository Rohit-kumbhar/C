#include<stdio.h>
int main()
{
    int x,y,z,i,j,k;
    float a,b,c;
    printf("\nenter two floating point number");
    scanf("%f %f",&a,&b);
    c = a + b;
    x = (int)c;
    printf("add %f %f %d",a,b,x);
    return 0;
}
