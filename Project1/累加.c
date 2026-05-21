/*
 * 从 n 累加到 1
 * 输入一个数 n，计算并输出 n + (n-1) + ... + 1 的过程和结果。
 * 使用 while 循环从 n 递减到 1，输出每一步并累加。
 * static 关键字限定函数在本文件内使用。
 */
#include<stdio.h>
static int leijia()
{
  int n, count=0 ,s;            /* n: 当前值，count: 累加和，s: 备份初始值 */
  printf("请输入一个数: ");
  scanf("%d",&n);
  s = n;                        /* 保存初始 n 用于输出判断 */
  while (n > 0)                 /* 从 n 递减到 1 */
  {
    count=count+n;              /* 累加当前值 */
    
    
    if(n!=s)                    /* 除第一个数外，前面加 + 号 */
    {
      printf("+");
	}
	printf("%d", n);            /* 输出当前数 */
    n = n - 1;                  /* 递减 */
  }
  printf("=%d", count);         /* 输出总和 */
  return 0;

}