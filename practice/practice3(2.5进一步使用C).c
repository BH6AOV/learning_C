// fathm_ft.c -- ��2ӢѰת����Ӣ�� //2.5.1 ����ʼ��ʹ��ע�͸������ļ����ͳ���Ŀ��
#include <stdio.h> 

int main(void)
{
	int feet, fathoms; //2.5.2 �˴���������������,��ʹ��","�ָ������������˴��ȼ���:
	                   /*
	                    int feet;
	                    int fathoms;
	                   */

	fathoms = 2;
	feet = 6 * fathoms; //2.5.3 �˴���������˳˷�����,C��ʹ��"*"��ʾ�˷�,�˴�����˼Ϊ"���ұ���fatoms��ֵ,��6���Ը�ֵ�󽫼�������ֵ��feet"

	printf("The are %d feet in %d fathoms!\n", feet, fathoms); //2.5.4 �˴������������滻,����"feet"�滻�˵�һ��%d,"fathoms"�滻�˵ڶ���%d
	printf("Yes,I said %d feet!\n", 6 * fathoms);

	return 0;
}