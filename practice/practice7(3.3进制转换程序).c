/* bases.c--prints 100 in decimal, octal, and hex */ //��ʮ����/�˽���/ʮ�����ƴ�ӡʮ������100
#include <stdio.h>
int main(void)
{
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x); //����ʾ�˽��Ƶ�0ǰ׺��ʮ�����Ƶ�0xǰ׺
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x); //��ʾ�˽��Ƶ�0ǰ׺��ʮ�����Ƶ�0xǰ׺

    return 0;
}

//�ڽ�����ֵ����ת�������ʱ�������Ҫ��ʾ����ǰ׺,Ҫ�ֱ���ת��˵���м���#,���� %o ָ����ǰ׺����˽��ƶ� %#o ��ʾ��ǰ׺����˽���