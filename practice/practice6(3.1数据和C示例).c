/* platinum.c  -- your weight in platinum */
#include <stdio.h>
int main(void)  //intΪ��������
{
	float weight;    /* user weight             */ //floatΪ����������
	float value;     /* platinum equivalent     */

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");

	/* get input from the user                     */
	scanf("%f", &weight); //scanf()���ڶ�ȡ��������,"&"����ָʾ���������λ�ò��������ֵ��ֵ����Ϊ"weight"�ĺ���
	/* assume platinum is $1700 per ounce          */
	/* 14.5833 converts pounds avd. to ounces troy */
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value); //"%.*f"(*λ����)�Ľṹ��ʾ�˴�ֻ�ᾫȷ���С�����*λ����ֵ
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}


//�ɴ˳������ǿ��Եõ�һ���ɽ�������ļ�����ṹ����:
/*platinum.c*/
��
��
int main(void)
{
	��
	��
	��
	scanf("~~~") //�˴���ȡ��������
	��
	��
	��
	printf("Are you~~") //�˴���ʾ�������
	printf(~~~~) //�˴���ʾ�������
	��
	��
	return 0;
}