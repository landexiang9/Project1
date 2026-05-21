// 输入 10 个字符，分类统计大写字母、小写字母、数字和其他字符的个数
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int saincount()
{
	int big=0, small=0,num=0, oth=0, i=0;
	char ch;
	for (; i < 10; i++)
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
	printf("��ʮ���ַ��д�д�ַ���%d����Сд�ַ���%d����������%d���������ַ���%d��", big, small, num, oth);

}