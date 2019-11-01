#include <stdio.h>

/*以下为函数头部分*/
int main(void) //int用于声明,此处用于声明"main"没有参数 注意,*.c除了特殊情况外第一个运行的函数一定是main()
/*以上为函数头部分*/

/*以下为函数体部分*/
{ //函数体开始
	int q; //声明"q"
	q = 1; //对q进行赋值
	printf("%d is neat. \n", q); //"\n"是换行符,此处"q"用于定义"%d"使用"q"的值

	return 0; //返回该int main的值为0
} //函数体结束
/*以上为函数体部分*/

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