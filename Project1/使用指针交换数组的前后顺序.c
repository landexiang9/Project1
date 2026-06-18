void zhiznegjiaohuan(int n, int* arr);
int shiyongzhizhenjiaohuanshuzushunxu()
{
	int num[10] = { 1,2,3,4,5,6,7,8,9,10 }, n=10 ,*arr,i;
	arr = num;
	zhiznegjiaohuan(n, arr);
	for (i = 0; i < n; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}
void zhiznegjiaohuan(int n ,int *arr)
{
	int* left, * right, temp;
	left = arr;
	right = arr + n - 1;
	for (; left < right;)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}