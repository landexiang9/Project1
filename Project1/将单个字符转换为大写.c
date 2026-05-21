/*
 * 小写转大写
 * 输入一个字符，选择使用 if-else 语句或三目运算符（条件表达式）将其转换为大写。
 * 核心知识点：
 *   1. ASCII 码中小写字母比大写字母大 32
 *   2. if-else 分支与三目运算符 ?: 的等价性对比
 *   3. 字符与整型的混用（s >= 97 等价于 s >= 'a'）
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int an(char t);                 /* if-else 版本的前向声明 */
int bn(char s);                 /* 三目运算符版本的前向声明 */

int main14()
{
	char a;
	int b;                      /* 选择使用哪种转换方式 */
	printf("请输入一个字符");
	scanf(" %c", &a);
	printf("请输入0或1来选择方式：\n [1]使用条件表达式\n [0]使用if语句\n:");
	scanf("%d",&b);
	/* 根据用户选择调用不同版本的转换函数 */
	if (b ==0)
		an(a);                  /* if-else 方式 */
	else if (b == 1)
		bn(a);                  /* 三目运算符方式 */
	else
		printf("请输入正确的方式");
	
	return 0;
}
/* 三目运算符版本：s>=97（即小写字母）则 s-32（转为大写），否则不变 */
int bn(char s)
{
	printf("转换后的字符为%c", s >= 97 ? s - 32 : s);
	return 0;

}
/* if-else 版本：判断 ASCII 值是否 >= 97（小写 a 的 ASCII 码） */
int an(char t)
{
	if (t >= 97)                /* 小写字母 ASCII 范围 97~122 */
		printf("转换为大写%c", t - 32);
	else
		printf("无需转换,字符为%c", t);

	return 0;

}