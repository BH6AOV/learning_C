/* two_func.c -- a program using two functions in one file */
#include <stdio.h>
void butler(void);      /* ANSI/ISO C function prototyping */ //�˴���"butler()"��ANSI/ISO C����ԭ��,���ڸ�֪��������Ҫ�ڳ�����ʹ�øú���
int main(void)
{
	printf("I will summon the butler function.\n");
	butler(); //�˴���"butler()"�Ǻ�������
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}

void butler(void)       /* start of function definition */ //�˴���"butler()"�Ǻ�������,������"butler()"��Դ���� ע��,�˴�"void"�ĺ�����"�յ�"����"��Ч"
{
	printf("You rang, sir?\n");
}

//�ر�����:����ԭ��ϵC90������׼,��ʽ�����������޷�ʶ��,������ᵽ��ʹ�þ�ʽ��������Ҫ��β��� 