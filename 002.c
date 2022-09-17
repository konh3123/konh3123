#include<stdio.h>
int main()
{
    // 定义变量
    int mark;
    printf("请输入您的成绩：");
    scanf("%d/n",&mark);
    mark = mark/10; //利用整形除法可以达到取整<=>一个范围变量
                    //非常好用！！！

    // 定义循环
    switch (mark)
    {
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("垃圾爬\n");
        break;
    }
    return 0;
}