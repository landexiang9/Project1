/*
 * scanf 格式说明符与输入宽度限定演示
 * 展示 scanf 的高级用法：
 *   %4d     — 最多读 4 位整数
 *   %2hd    — 最多读 2 位整数赋给 short
 *   %5f     — 最多读 5 位浮点数
 *   %*d     — 读取并丢弃一个整数（跳过不存储）
 *   %6lf    — 最多读 6 位赋给 double
 * 知识点：输入宽度限定、赋值抑制 *、类型修饰符 h/l。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main7() 
{int a;
short b;
float c;
double x;
printf("请输入a，b=4位数字以定义a，两位数字以定义b\n");
scanf("a,b:%4d%2hd", &a,&b);   /* 匹配前缀 "a,b:"，然后读最多 4 位给 a，2 位给 b */
printf("请输入5位数字以定义浮点数c，两位数字以实现分割，两位数字以定义双精度浮点数b\n");
scanf("%5f,%*d,%6lf", &c, &x); /* 读 5 位给 c，跳过 2 位整数，读 6 位给 x */
printf("a=%d,b=%hd\n",a,b);
printf("c=%f,x=%lf\n", c, x);
return 0;
}