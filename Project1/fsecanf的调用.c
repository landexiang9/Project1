#include<stdio.h>
int usefscanf()
{
	int i, n;
	char c;
	FILE* fp;
	if((fp=fopen("forma.txt", "r")) == NULL)
	{printf("不能打开文件!\n");
		exit();

	}	
	for(i=0;i<=6;i++)
	{
		fscanf(fp, "%c:%d", &c, &n);
		printf("%c:%d",c, n);

	}
	if (fclose(fp))
	{
		printf("文件关闭失败!\n");
		exit(1);
	}
	return 0;
}
int usefprintf()
{
	int i, n[6]={1,2,3,4,5,6};
	char c[6] = { 'a','b','c','d','e','f' };
	FILE* fp;
	if((fp=fopen("forma.txt", "w")) == NULL)
	{printf("不能打开文件!\n");
		exit();
	}	
	for(i=0;i<=6;i++)
	{
		
		fprintf(fp, "%c:%d\n", c[i], n[i]);
	}
	if (fclose(fp))
	{
		printf("文件关闭失败!\n");
		exit(1);
	}
	return 0;
}