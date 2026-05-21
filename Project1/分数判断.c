// 分数等级判断：根据输入的分数输出对应的评语
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main13()
{
	int a;
	printf("��������ķ���:");
	scanf("%d", &a);
	if (a > 90)
		printf("wow!,����㾹Ȼ��%d�ĸ߷�", a);
	else if (a <= 90 && a >= 80)
		printf("����������%d��", a);
	else if (a >= 70)
		printf("����");
	else if (a >= 60)
		printf("ŬŬ������Ҳ�ܳ�Ϊ��������");
	else if (a >= 0)
		printf("������δ�ɹ���ͬ־����Ŭ��");
	else
		printf("������Ż����˲�");



}

