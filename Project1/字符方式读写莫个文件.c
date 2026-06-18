#include<stdio.h>
int duxeiwenjian()
{
	char ch;
	FILE* fq;
	fq = fopen("asc.txt", "w+");
	if (fq == NULL)
		printf("不能打开文件!\n");
	printf("请输入若干文字(#号结束):\n");
	ch = getchar();
	while(ch != '#')
	{
		fputc(ch, fq);
		ch = getchar();
	}
	while(ch!=EOF)
	{putchar(ch);
		ch = fgetc(fq);
		printf("%c", ch);
	}
	if (fclose(fq))
	{
		printf("文件关闭失败!\n");
		exit(1);

	}
	return 0;
}