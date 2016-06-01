#include"stdio.h"
void main()
{
	int s[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	int i, j;
	int all = 0, a, b;
	int m, n;
	int c, d, small_all = 0;
	//主对角线元素之和sum1，左上到右下
	for (i = 0, j = 0, sum1 = 0; i <= 4; i++, j++)
		sum1 += s[i][j];
	printf("主对角线元素之和=%d\n", sum1);

	//除对角线元素（包括主对角线和辅对角线）
	for (a = 0; a <= 4; a++)
		for (b = 0; b <= 4; b++)
			all += s[a][b];
	sum2 = all - sum1 - s[4][0] - s[3][1];
	printf("除对角线以外的所有元素之和=%d\n", sum2);

	//上三角（右上）元素之和sum3
	for (m = 0; m <= 4; m++)
		for (n = 0; m < 4 - n; n++)
			sum3 += s[m][n];
	printf("上三角元素之和=%d\n", sum3);

	//首行、首列、末行、末列元素之和sum4
	for (c = 1; c <= 3; c++)
		for (d = 1; d <= 3; d++)
			small_all += s[c][d];
	sum4 = all - small_all;
	printf("首行、首列、末行、末列元素之和=%d\n", sum4);
	system("pause");
}