#include"stdio.h"
#define N 10
main()
{
	int a[N], i, j, k, x;
	printf("Input 10 numbers:\n");
	for (i = 0; i<N; i++)
		scanf_s("%d", &a[i]);
	printf("\n");
	for (i = 0; i<N - 1; i++)
	{
		k = i;
		for (j = i + 1; j<N; j++)
			if (a[j]<a[k])  k = j;
		if (i != k)
		{
			x = a[i]; a[i] = a[k]; a[k] = x;
		}
	}
	printf("The sorted numbers:\n");
	for (i = 0; i<N; i++)
		printf("%d ", a[i]);
	system("pause");
}
