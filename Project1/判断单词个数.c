// 判断一个字符串中的单词个数（以空格分隔）
#include<stdio.h>
void panduandancigeshu()
{
	char str[100];
	int i, count = 0;
	printf("������һ���ַ���: ");
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
	printf("���ʵĸ���Ϊ: %d\n", count);
}
