#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main7() 
{int a;
short b;
float c;
double x;
printf("请输入a，b=4位数字以定义a，两位数字以定义b\n");
scanf("a,b:%4d%2hd", &a,&b);
printf("请输入5位数字以定义浮点数c，两位数字以实现分割，两位数字以定义双精度浮点数b\n");
scanf("%5f,%*d,%6lf", &c, &x);
printf("a=%d,b=%hd\n",a,b);
printf("c=%f,x=%lf\n", c, x);
}