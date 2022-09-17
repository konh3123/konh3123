#include<stdio.h>
int main()
{
    int f_x = 0;
    int x = 0;
    scanf("%d\n",&x);
    if (x<0)
    {
        f_x = -1;
    }
    if (x>0)
    {
        f_x = 1;
    }
    if (x == 0)
    {
        f_x = 0;
    }
    
    
    printf("%d",f_x);
    
    return 0;
}