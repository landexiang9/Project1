#include <stdio.h>
average(int student[5][6])
{
	int i, j;
	printf("学号        数学        英语        计算机        总分        平均分 \n");
	for (i = 0; i < 5; i++)
	{student[i][4]=student[i][1]+student[i][2]+student[i][3];
	 student[i][5]=student[i][4]/3;
	 
	}
	for(i=0;i<5;i++)
	{
		for (j = 0; j < 6; j++)
			printf("%-12d ", student[i][j]);
		printf("\n");
	}
}
search(int(*pl)[6], int n)
{
	int i, j, flag;
	printf("\n成绩有一门以上课程不及格的学生如下:\n");
	for(i=0;i<n;i++)
	{
		flag = 0;
		for(j=1;j<4;j++)
			if (*(* (pl+i)+j) < 60)
			{
				flag = 1;
			if(flag==1)
				for(j=0;j<6;j++)
					printf("%-12d ", *(* (pl+i)+j));
				printf("\n");
			}
	}
}
int main114()
{
	int student[5][6] = { { 1001, 90, 80, 70 }, { 1002, 60, 50, 40 }, { 1003, 85, 75, 65 }, { 1004, 55, 45, 35 }, { 1005, 95, 85, 75 } };
	average(student);
	search(student,5);
	return 0;
}