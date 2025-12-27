#include<stdio.h>
int max(int *x, int *y)
{
    if (*x > *y)
    {
        return *x;
    }
    else
    {
        return *y;
    }
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int res=max(&a,&b);
    printf("The maximum number is: %d\n",res);
    return 0;
}