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
	scanf("%f", &weight); //scanf()用于读取键盘输入,"&"用于指示输入参数的位置并将输入的值赋值给名为"weight"的函数
	/* assume platinum is $1700 per ounce          */
	/* 14.5833 converts pounds avd. to ounces troy */
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value); //"%.*f"(*位数字)的结构表示此处只会精确输出小数点后*位的数值
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}


//由此程序我们可以得到一个可交互程序的简单序体结构如下:
/*platinum.c*/
·
·
int main(void)
{
	·
	·
	·
	scanf("~~~") //此处获取程序输入
	·
	·
	·
	printf("Are you~~") //此处显示程序输出
	printf(~~~~) //此处显示程序输出
	·
	·
	return 0;
}