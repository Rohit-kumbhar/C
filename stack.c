#include<stdio.h>
int top = -1,size;
int A[20];
void insertion(int *n)
{
    if(top < size)
    {
        top++;
        A[top] = *n;
    }
    else
    {
        printf("\nstack is full");
    }
}
void delete()
{
    if(top != -1)
    {
        top--;
    }
    else
    {
        printf("\nnothing to delete");
    }
}
void display()
{
    int i,j;
    printf("\nThe elements in stack is:");
    for(i = 0;i <= top;i++)
    {
        printf("\n%d",A[i]);
    }
}
void check()
{
    printf("\nthe space left is %d",size - top);
}
int main()
{
    int x,y,z,i,j,k;
    printf("\n enter the size of the stack");
    scanf("%d",&size);
    size--;
    while(1)
    {
        printf("\nEnter your choice:\n1 for insertion\n2 for deletion\n3 for displaying the elements\n4 to check remaining space\n5 for exit");
        scanf("%d",&x);
        if(x == 1)
        {
            printf("\nenter the number you want to insert");
            scanf("%d",&y);
            insertion(&y);
        }
        else if(x == 2)
        {
            delete();
        }
        else if(x == 3)
        {
            display();
        }
        else if(x == 4)
        {
            check();
        }
        else if(x == 5)
        {
            return 0;
        }
        else
        {
            printf("\nplease enter a valid number");
        }
    }
    return 0;
}
