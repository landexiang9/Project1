// 将小写字符转换为大写（分别使用 if-else 和三目运算符演示）
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main14()
{
	char a;
	int b;
	printf("������һ���ַ�");
	scanf(" %c", &a);
	printf("������0��1��ѡ��ʽ��\n [1]ʹ����������ʽ\n [0]ʹ��if���\n:");
	scanf("%d",&b);
	if (b ==0)
		an(a);
	else if (b == 1)
		bn(a);
	else
		printf("��������ȷ�ķ�ʽ");
	
	return 0;
}
int bn(char s)
{
	printf("ת������ַ�Ϊ%c", s >= 97 ? s - 32 : s);
	return 0;

}
int an(char t)
{
	if (t >= 97)
		printf("ת��Ϊ��д%c", t - 32);
	else
		printf("����ת��,�ַ�Ϊ%c", t);

	return 0;

}