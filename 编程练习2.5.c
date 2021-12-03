#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void br(void);
void cr(void);
int main(void)
{
	printf("Brazil,Russia,India,China\n");
	cr();
	br();
	return 0;
}
void cr(void)
{
	printf("India,Chian\n");
}
void br(void)
{
	printf("Brazil,Russia");
}
