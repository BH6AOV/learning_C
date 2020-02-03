/* bases.c--prints 100 in decimal, octal, and hex */ //以十进制/八进制/十六进制打印十进制数100
#include <stdio.h>
int main(void)
{
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x); //不显示八进制的0前缀和十六进制的0x前缀
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x); //显示八进制的0前缀和十六进制的0x前缀

    return 0;
}

//在进行数值进制转换输出的时候如果需要显示进制前缀,要分别在转换说明中加入#,例如 %o 指不带前缀输出八进制而 %#o 表示带前缀输出八进制