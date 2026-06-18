
#include<stdio.h>
void zhizhenpanduandancigeshu()
{
	char str[100], * i;
	int  count = 0;           
	printf("请输入一个字符串: ");
	gets(str);                  
	i = str;
	for (; *i != '\0'; i++)
	{
		
		if (*i == ' ' && *(i+1)!= ' ' && *(i + 1)!= '\0')
		{
			count++;
		}
	}
	
	if (i > str && *str!= ' ')
	{
		count++;
	}
	printf("单词的个数为: %d\n", count);
}
