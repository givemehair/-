#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int age, days;
	scanf("%d", &age);
	days = 365 * age;
	printf("I'm %d years old\n",age);
	printf("Days are %d\n", days);
	return 0;
}
