// scanf 格式说明符与输入宽度限定演示
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main7() 
{int a;
short b;
float c;
double x;
printf("������a��b=4λ�����Զ���a����λ�����Զ���b\n");
scanf("a,b:%4d%2hd", &a,&b);
printf("������5λ�����Զ��帡����c����λ������ʵ�ַָ��λ�����Զ���˫���ȸ�����b\n");
scanf("%5f,%*d,%6lf", &c, &x);
printf("a=%d,b=%hd\n",a,b);
printf("c=%f,x=%lf\n", c, x);
return 0;
}