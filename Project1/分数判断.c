#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main13()
{
	int a;
	printf("请输入你的分数:");
	scanf("%d", &a);
	if (a > 90)
		printf("wow!,天才你竟然有%d的高分", a);
	else if (a <= 90 && a >= 80)
		printf("不戳不戳有%d分", a);
	else if (a >= 70)
		printf("还行");
	else if (a >= 60)
		printf("努努力，你也能成为人中龙凤");
	else if (a >= 0)
		printf("革命尚未成功，同志仍需努力");
	else
		printf("你是天才还是人才");



}

