//����Ԫ��Ҫѧϰ������Ϊdebug,��������Ҫ�Լ��ҳ�bug���޸����ע

//�޸ĺ����
/*  nogood.c -- a program with errors */
#include <stdio.h>
int main(void)
{ //�˴�ԭʹ��"(",Ӧ��Ϊ"{"
	int n, n2, n3; //�˴�Ӧ����Ϊ int n, n2, n3; ����int n,int n2,int n3;

	/* this program has several errors*/ //�˴�ȱ��ע�ͽ�����
	n = 5;
	n2 = n * n;
	n3 = n * n2; //�˴�����ʽ����,��Ϊ"n3 = n * n2;"
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

	return 0;
} //�˴�ԭʹ��"(",Ӧ��Ϊ"{"

//�޸�ǰ����
/*  nogood.c -- a program with errors */
#include <stdio.h>
int main(void)
( //�˴�Ӧ��Ϊ"{"
	int n, int n2, int n3; //�˴�Ӧ����

/* this program has several errors //�˴�ȱ��ע�ͽ�����ʶ
 n = 5;
 n2 = n * n;
 n3 = n2 * n2; //�˴�����ʽ����
 printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)

 return 0;
 ) //�˴�Ӧ��Ϊ"}"