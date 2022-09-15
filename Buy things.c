#include<stdio.h>
int main()
{
    float a = 0;

    printf("请输入您的初始金额\n");
    scanf("%f",&a);
 
    float cost = 0;
    printf("请输入您的消费金额\n");
    scanf("%f",&cost);
    float change = a - cost;
    printf("应收款%f元\n请收好您的找零%f元\n欢迎下次光临",cost,change);
    return 0; 
}