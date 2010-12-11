#include <stdio.h>
int main(int argc, const char *argv[])
{
    int int_a=97;//定义变量
    printf("char :%d\n",int_a);//输出整型
    printf("int :%c\n",int_a); 
    printf("0x :%x\n",int_a);
    printf("sizeof=%d\n",sizeof(int_a));
    printf("sizeof=%d\n",sizeof(char));
    printf("sizeof=%d\n",sizeof(float));
    return 0;
}

