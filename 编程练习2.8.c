#define _CRT_SECURE_NO_WARNINGS 1//��������ȷ����Ϊ����Ҫ����
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