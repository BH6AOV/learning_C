/* platinum.c  -- your weight in platinum */
#include <stdio.h>
int main(void)  //int为整数类型
{
	float weight;    /* user weight             */ //float为浮点数类型
	float value;     /* platinum equivalent     */

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");

	/* get input from the user                     */
	scanf("%f", &weight); //scanf()用于读取键盘输入,"&"用于指示输入参数的位置
	/* assume platinum is $1700 per ounce          */
	/* 14.5833 converts pounds avd. to ounces troy */
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}
