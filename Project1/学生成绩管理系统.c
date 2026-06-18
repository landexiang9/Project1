#include<stdio.h>
struct studata
{
	int stumhao;
	char stunam[32];
	double stucga, stuenga, stumaga ,stucouga ,stuavgga;
};
int gaunlixitong()
{
	struct studata data[100];
	int shuruxueshengchengji(struct studata* data);
	shuruxueshengchengji(data);
	int chundaomogewenjainli(struct studata* data);
	chundaomogewenjainli(data);



}
int shuruxueshengchengji(struct studata* data)
{
	int n , i;
	printf("请输入本次要录入的学生个数,注意这将会覆盖上一次的成绩:");
	scanf("%d", &n);
	if (n > 100)
	{
		printf("最多输入100个成绩");
		return 1;
	}
	printf("学号 姓名 c语言成绩 英语成绩 数学成绩 \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d %s %lf %lf %lf",
			&(data + i)->stumhao,
			(data + i)->stunam,
			&(data + i)->stucga,
			&(data + i)->stuenga,
			&(data + i)->stumaga);
		data[i].stucouga =
			data[i].stucga
			+ data[i].stuenga
			+ data[i].stumaga;
		data[i].stuavgga = data[i].stucouga / 3;
	}
}
int chundaomogewenjainli(struct studata* data)
{
	FILE* fl = fopen("chenji.txt", "a+");
	if(fl==NULL)
	{
		printf("打开失败");
		return 1;
	}
	int n,i;
	printf("请输入要写入文件的学生个数:");
	scanf("%d", &n);
	fprintf(fl, "学号 姓名 c语言成绩 英语成绩 数学成绩 总成绩 平均成绩");
	for (i = 0; i < n; i++)
	{
		fprintf(fl, "%d %s %0.2lf %0.2lf %0.2lf %0.2lf %0.2lf \n",
			(data + i)->stumhao,
			(data + i)->stunam,
			(data + i)->stucga,
			(data + i)->stuenga,
			(data + i)->stumaga,
			(data + i)->stucouga,
			(data + i)->stuavgga);
	}
	fclose(fl);
}