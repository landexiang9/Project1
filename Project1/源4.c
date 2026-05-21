// C 语言类型转换与 sizeof 运算符演示
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main5()
{
	printf("%zu",sizeof(unsigned));
	int a = 3, b = 4 ,e=2;
	float c,d,f=1.5,g;
	c = (float)(a + b) / 2;
	d = (float)(a / e);
	g = (float)(a / (float)e);
	printf("c=%f,d=%f,g=%f" ,c, d, g);
	printf("%zu,%zu,%zu",sizeof(a), sizeof(b), sizeof(c));
		return 0;

}