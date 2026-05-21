// printf 格式说明符演示：%d、%o、%x、%ld 等用法
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main6()
{
	int a = 123;
	long b = 32770;
	printf("a=%+-10d,b=%ld\n", a, b);
	printf("a=%o,b=%lo\n", a, b);
	printf("a=%#x，b=%#lx\n", a, b);
	printf("a=%d,b=%ld\n", a);
	printf("a+b=%ld\n", a + b, b);
	printf("输出结束！\n");
	return 0;
}