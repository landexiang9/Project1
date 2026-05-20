#include<stdio.h>
void panduandancigeshu()
{
	char str[100];
	int i, count = 0;
	printf("请输入一个字符串: ");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
			count++;
		}
	}
	if (i > 0 && str[0] != ' ')
	{
		count++;
	}
	printf("单词的个数为: %d\n", count);
}
