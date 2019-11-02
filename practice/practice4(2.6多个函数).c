/* two_func.c -- a program using two functions in one file */
#include <stdio.h>
void butler(void);      /* ANSI/ISO C function prototyping */ //此处的"butler()"是ANSI/ISO C函数原型,用于告知编译器需要在程序中使用该函数
int main(void)
{
	printf("I will summon the butler function.\n");
	butler(); //此处的"butler()"是函数调用
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}

void butler(void)       /* start of function definition */ //此处的"butler()"是函数定义,即函数"butler()"的源代码 注意,此处"void"的含义是"空的"而非"无效"
{
	printf("You rang, sir?\n");
}

//特别提醒:函数原型系C90新增标准,旧式编译器可能无法识别,后面会提到若使用旧式编译器需要如何操作 