// 逻辑运算符演示：!、&&、|| 的运算规则与短路求值
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main8()
{int a = 3,b = 3,c = 0,d;
printf(" %d", !c);
printf("%d,", !a && !b && c);
printf("%d,", !a || !b || c);
printf("%d\n", a >= b && b > c);
d = c-- || (b == 6) && a++;
printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
return 0;


}