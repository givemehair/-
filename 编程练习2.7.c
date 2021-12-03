#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void smile(void);//定义一个函数，打印一次：aaa\n  aa\n  a\n
int main(void)
{
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	printf("\n");
	return 0;
}
void smile(void)
{
	printf("Smile!");
}
