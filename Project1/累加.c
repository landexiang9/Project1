// 从 n 累加到 1：输入一个数，计算 n+(n-1)+...+1
#include<stdio.h>
static int leijia()
{
  int n, count=0 ,s;
  printf("锟斤拷锟斤拷锟斤拷一锟斤拷锟斤拷锟斤拷: ");
  scanf("%d",&n);
  s = n;
  while (n > 0)
  {
    count=count+n;
    
    
    if(n!=s)
    {
      printf("+");
	}
	printf("%d", n);
    n = n - 1;
  }
  printf("=%d", count);
  return 0;

}