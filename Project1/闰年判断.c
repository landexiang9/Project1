// 闰年判断：输入年份，判断是否为闰年
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main11()
{
	int a, b;
	printf("�������жϵ���ݣ�");
	scanf("%d", &a);
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0 ))
		printf("%d ��������",a);
	else
	{
		printf("%d�겻������", a);
		printf("\nbut����һ����˧��");

	}
	if (a == 2008)
		printf("\n�������Ǵ�˧��");


}