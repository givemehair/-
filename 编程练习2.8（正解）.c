#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void one_three(void);//�����������ӡone�����������two�������ٴ�ӡthree
void two(void);//�����������ӡtwo
int main(void)
{
	printf("Starting now\n");
	one_three();//ֻ�ܵ���һ������
	printf("done!\n");
	return 0;
}
void one_three()
{
	printf("one\n");
	two();//��one_three()�е���two()
	printf("three\n");
}
void two()
{
	printf("two\n");
}