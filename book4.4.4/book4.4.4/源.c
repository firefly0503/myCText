#include"stdio.h"
main()
{
	int i, j, max, min, flag = 0, col = 0, k;   //flag是鞍点是否存在的标志，0表示不存在
	int a[5][5] = { {79, 10, 89, 24, 31 }, 
	                { 2,  4, 16,  6,  3}, 
	                {66,  3, 15,  7,  4},
	                { 2,  4, 14, 12,  6},
	                { 2,  5, 78,  3, 21} };//行上为最大，列上为最小

	for (i = 0; i<5; i++)//对每一行寻找鞍点
	{
		max = a[i][0];//假定首列元素为最大值

		for (j = 0; j<5; j++)
			if (max<a[i][j])
			{
				max = a[i][j]; col = j;
			}//求每一行的最大值max及最大值所在的列col

		for (k = 0, min = max; k<5; k++)
			if (a[k][col]<min) min = a[k][col];//求每一行的最大值max所在的列的最小值min

		if (min == max)//如果每一行的最大值的等于所在列的最小值。则存在鞍点，输出相关信息
		{
			flag = 1;
			printf("鞍点在a[%d][%d]=%d\n", i, col, a[i][col]);
		}
	}
	if (flag == 0)
		printf("没有鞍点\n");
	system("pause");
}
