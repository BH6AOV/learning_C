// fathm_ft.c -- 把2英寻转换成英尺 //2.5.1 程序开始处使用注释给出了文件名和程序目的
#include <stdio.h>
int main(void)
{
	int feet, fathoms;

	fathoms = 2;
	feet = 6 * fathoms;

	printf("The are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes,I said %d feet!\n", 6 * fathoms);

	return 0;
}