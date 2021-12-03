#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void one_three(void);//调用这个，打印one，在里面调用two函数，再打印three
void two(void);//调用这个，打印two
int main(void)
{
	printf("Starting now\n");
	one_three();//只能调用一个函数
	printf("done!\n");
	return 0;
}
void one_three()
{
	printf("one\n");
	two();//在one_three()中调用two()
	printf("three\n");
}
void two()
{
	printf("two\n");
}