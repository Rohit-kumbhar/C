#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,i,j,k;
    float f,g,h;
    printf("\nenter a floating point number");
    scanf("%f",&f);
    x = (int)f;
    g = f - x;
    g = g * 100;
    y = (int)g;
    printf("\n the required number is %d",y);
    return 0;
}
