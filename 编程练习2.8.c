#define _CRT_SECURE_NO_WARNINGS 1//输出结果正确，但为按照要求来
#include<stdio.h>
void one_three(void);
void two();
int main(void)
{
	printf("Starting now:\n");
	one_three();
	printf("two\n");
	two();
	printf("done!\n");
	return 0;
}
void one_three()
{
	printf("one\n");
}
void two()
{
	printf("three\n");

}