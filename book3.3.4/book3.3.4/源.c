#include"stdio.h"
void main()
{
	int i, j;
	long sum = 1, product = 0;
	printf("计算前n项阶乘的和\n");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++)
	{
		sum = i*sum;
		product += sum;
	}
	printf("%d的阶乘是：%ld\n", j, sum);
	printf("从1!到%d!的和是：%ld\n", j, product);
	system("pause");
}