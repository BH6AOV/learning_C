//本单元需要学习的内容为debug,此例题需要自己找出bug并修改与标注

//修改后代码
/*  nogood.c -- a program with errors */
#include <stdio.h>
int main(void)
{ //此处原使用"(",应改为"{"
	int n, n2, n3; //此处应整合为 int n, n2, n3; 而非int n,int n2,int n3;

	/* this program has several errors*/ //此处缺少注释结束符
	n = 5;
	n2 = n * n;
	n3 = n * n2; //此处计算式错误,改为"n3 = n * n2;"
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)

	return 0;
} //此处原使用"(",应改为"{"

//修改前代码
/*  nogood.c -- a program with errors */
#include <stdio.h>
int main(void)
( //此处应该为"{"
	int n, int n2, int n3; //此处应整合

/* this program has several errors //此处缺少注释结束标识
 n = 5;
 n2 = n * n;
 n3 = n2 * n2; //此处计算式错误
 printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)

 return 0;
 ) //此处应该为"}"
