#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
double coutcheng(int n);
int jishuangnchujiecheng()
{
	int x ,n ,t=0 ;
	double	shang, count = 0, fenmu, fenzi;
	printf("请输入x的值");
	scanf("%d",&x);
	do
	{ 
		fenzi = pow(x, t);
		fenmu = fabs(coutcheng(t));
		
		shang = fenzi / fenmu;
		count = count + shang;
		t = t + 1;
	}while (fabs(shang) > pow(10, -4));
	printf("结果为：%lf", count);
}