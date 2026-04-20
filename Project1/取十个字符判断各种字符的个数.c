#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>;
int saincount()
{
	int big=0, small=0,num=0, oth=0, i=0;
	char ch;
	for (; i <= 10; i++)
	{
		ch = getchar();
		if (ch >= 'A' && ch <= 'Z')
			big = big + 1;
		else if (ch >= 'a' && ch <= 'z')
			small = small + 1;
		else if (ch >= '0' && ch <= '9')
			num = num + 1;
		else
			oth = oth + 1;

	}
	printf("这十个字符中大写字符有%d个，小写字符有%d个，数字有%d个，其他字符有%d个", big, small, num, oth);

}