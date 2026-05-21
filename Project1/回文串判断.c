#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
// 判断回文串：输入字符串，判断正序和逆序是否相同
#include<string.h>
#include<stdio.h>
void panduanhuiwenchuang()
{
	int t,n;
	char c1[50], c2[50];
	printf("请输入一个字符串");
	gets(c1);
	n = strlen(c1)-1;
	for (t = 0; n>= 0; n--)
	{
		c2[n]=c1[t];
		t++;
	}
	c2[t] = '\0';
	if (strcmp(c1, c2) == 0)
	{
		printf("same");
	}
	else
		printf("not same");
	puts(c1);
	puts(c2);

}