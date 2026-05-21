// 计算 e^x 的近似值：x^n/n! 的累加和（泰勒级数展开）
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
double coutcheng(int n);
int jishuangnchujiecheng()
{
	int x ,n ,t=0 ;
	double	shang, count = 0, fenmu, fenzi;
	printf("������x��ֵ");
	scanf("%d",&x);
	do
	{ 
		fenzi = pow(x, t);
		fenmu = fabs(coutcheng(t));
		
		shang = fenzi / fenmu;
		count = count + shang;
		t = t + 1;
	}while (fabs(shang) > pow(10, -4));
	printf("���Ϊ��%lf", count);
}