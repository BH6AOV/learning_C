#include <stdio.h>

/*以下为函数头部分*/
int main(void) //int用于声明,定义变量"void" 注意,*.c除了特殊情况外第一个函数必须为main()
/*以上为函数头部分*/

/*以下为函数体部分*/
{ //函数体开始
	int q; //声明"q"
	q = 1; //对q进行赋值
	printf("%d is neat. \n", q); //定义"%d"调用"q"的值

	return 0; //结束程序
} //函数体结束
/*以上为函数头部分*/

/*
由此,我们可以总结出一个简单的C程序的基本框架为:
//函数头部分
#include <stdio.h>

//函数体部分
int main(void)
{
    语句;
	return 0;
}
*/