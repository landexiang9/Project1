#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<string.h>
void panduanhuiwenchuang()
{
	int a,t,n;
	char c1[50], c2[50];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®");
	a=gets(c1);
	n = strlen(c1)-1;
	for (t = 0; n>= 0; n--)
	{
		c2[n]=c1[t];
		t++;
	}
	if (strcmp(c1, c2) == 0)
	{
		printf("same");
	}
	else
		printf("not same");
	puts(c1);
	puts(c2);

}