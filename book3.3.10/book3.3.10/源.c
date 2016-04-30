#include"stdio.h"
void main()
{
	int i, j, n, k;
	printf("input n(<=10):");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++) printf("  ");
		for (j = 1; j <= i; j++) printf("%d ", j);
		for (j = 1, k = i - 1; j <= i - 1; j++, k--) printf("%d ", k);//k = i - 1 是指第i行，右侧为 i - 1
		printf("\n");
	}
	printf("\n");
	system("pause");
}