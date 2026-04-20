#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
main2()
{
	int s = 65, n = 1, t;
	t = ++s+ n++;
	printf("s=%c s=%d n=%d t=%c\n", s,s,n,t);
	t = ++s * --n % s;
	printf("s = %d n = %d t=%d", s,n,t);
	return 0;
	
}