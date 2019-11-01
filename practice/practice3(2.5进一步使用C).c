// fathm_ft.c -- 把2英寻转换成英尺 //2.5.1 程序开始处使用注释给出了文件名和程序目的
#include <stdio.h> 

int main(void)
{
	int feet, fathoms; //2.5.2 此处有两条变量声明,需使用","分隔两个变量即此处等价于:
	                   /*
	                    int feet;
	                    int fathoms;
	                   */

	fathoms = 2;
	feet = 6 * fathoms; //2.5.3 此处程序进行了乘法计算,C中使用"*"表示乘法,此处的意思为"查找变量fatoms的值,用6乘以该值后将计算结果赋值给feet"

	printf("The are %d feet in %d fathoms!\n", feet, fathoms); //2.5.4 此处进行了两次替换,其中"feet"替换了第一个%d,"fathoms"替换了第二个%d
	printf("Yes,I said %d feet!\n", 6 * fathoms);

	return 0;
}