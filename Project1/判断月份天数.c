// 输入年份和月份，判断该月有多少天（含闰年处理）
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main15()
{
	printf("智能天数判断系统\n");
	printf("请输入年月以判断这个月的天数");
	int y, m,d;
	scanf("%d%d", &y, &m);
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		d = 31; break;
	case 4:
	case 6:
	case 9:
	case 11:
		d = 30; break;

	case 2:
		if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
			d = 29; 
		else
			d = 28;
		break;
	default:
		d = 0; break;

	}
	if (d != 0)
		printf("%d年的第%d月份是%d天", y, m, d);
	else
		printf("请输入正确的月份");

}