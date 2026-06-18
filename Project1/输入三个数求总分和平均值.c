#include<stdio.h>
int shurushangeshuqiuzhongfenhepjunzhi()
{
	double a, b, c, all, avg;
	printf("请输入英语成绩:");
	scanf("%lf", &a);
	printf("\n请输入高数成绩:");
	scanf("%lf", &b);
	printf("\n请输入C语言成绩:");
	scanf("%lf", &c);
	all = a + b + c;
	avg = all / 3;
	printf("\n这三门成绩的总分为:%0.0lf\n平均成绩为:%0.2lf ",all,avg);
	return 0;
}