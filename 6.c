#include<stdio.h>
int main()
{
    int x,y,z,i;
    float a,b,c;
    int *p;
    scanf("%f",&a);
    x = (int)a;
    //y = digit(&x);
    for(i = 1;i < 100;i++)
    {
        z = x/10;
        if(z == 0)
        {
            printf("\n %d",x);
            i = 100;
        }
        else
        {
            x = z;
        }
    }
    return 0;
}
