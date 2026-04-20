#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main14()
{
	printf("请输入一个字符");
	char a;
	int b;
	scanf(" %c", &a);
	printf("请输入0或1来选择方式：\n [1]使用条件表达式\n [0]使用if语句\n:");
	scanf("%d",&b);
	if (b ==0)
		an(a);
	else if (b == 1)
		bn(a);
	else
		printf("请输入正确的方式");
	
	return 0;
}
int bn(s)
{
	char a=s;
	printf("转换后的字符为%c", a >= 97 ? a - 32 : a);
	return 0;
	

}
int an(t) 
{
	char a = t;
	if (a >= 97)
		printf("转换为大写%c", a-32);
	else
		printf("无需转换,字符为%c", a );

	return 0;

}