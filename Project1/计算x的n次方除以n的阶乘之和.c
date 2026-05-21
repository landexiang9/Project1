/*
 * e^x 近似值计算（泰勒级数展开）
 * 使用公式 e^x = 1 + x/1! + x²/2! + x³/3! + ... + xⁿ/n!
 * 逐项累加直到末项绝对值小于 10⁻⁴。
 * 调用 累乘while.c 中的 coutcheng(n) 计算阶乘。
 * 知识点：级数求和、函数调用、精度控制。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
double coutcheng(int n);        /* 声明在累乘while.c 中定义的阶乘函数 */

int jishuangnchujiecheng()
{
	int x ,n ,t=0 ;             /* x: 指数底数，t: 当前项索引 */
	double	shang, count = 0, fenmu, fenzi;
	/* shang: 当前项值，count: 累加和，fenmu: 分母 n!，fenzi: 分子 x^t */
	printf("请输入x的值");
	scanf("%d",&x);
	do
	{ 
		fenzi = pow(x, t);      /* 计算 x^t */
		fenmu = fabs(coutcheng(t)); /* 计算 t!（取绝对值防止 -0 问题） */
		
		shang = fenzi / fenmu;  /* 当前项值 */
		count = count + shang;  /* 累加 */
		t = t + 1;              /* 索引递增 */
	}while (fabs(shang) > pow(10, -4)); /* 末项绝对值小于 10⁻⁴ 时停止 */
	printf("结果为：%lf", count);
}