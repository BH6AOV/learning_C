#include <stdio.h> //预处理器命令头文件
int main(void) //声明函数main并定义变量为"void" 注意,*.c除了特殊情况外第一个函数必须为main()
{ //函数体开始
	int num; //定义变量"num"
	num = 1; //赋值语句

	printf("I am a simple"); //调用函数
	printf("computer.\n"); //"\n"是制表符,此处用于指示光标换行
	printf("My favorite number is %d because it is first.\n"); //"%d"用于指定输出格式

	return 0; //结束程序
} //函数体结束