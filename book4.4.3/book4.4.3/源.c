#include"stdio.h"
void main()
{
	int s[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	int i, j;
	int all = 0, a, b;
	int m, n;
	int c, d, small_all = 0;
	//���Խ���Ԫ��֮��sum1�����ϵ�����
	for (i = 0, j = 0, sum1 = 0; i <= 4; i++, j++)
		sum1 += s[i][j];
	printf("���Խ���Ԫ��֮��=%d\n", sum1);

	//���Խ���Ԫ�أ��������Խ��ߺ͸��Խ��ߣ�
	for (a = 0; a <= 4; a++)
		for (b = 0; b <= 4; b++)
			all += s[a][b];
	sum2 = all - sum1 - s[4][0] - s[3][1];
	printf("���Խ������������Ԫ��֮��=%d\n", sum2);

	//�����ǣ����ϣ�Ԫ��֮��sum3
	for (m = 0; m <= 4; m++)
		for (n = 0; m < 4 - n; n++)
			sum3 += s[m][n];
	printf("������Ԫ��֮��=%d\n", sum3);

	//���С����С�ĩ�С�ĩ��Ԫ��֮��sum4
	for (c = 1; c <= 3; c++)
		for (d = 1; d <= 3; d++)
			small_all += s[c][d];
	sum4 = all - small_all;
	printf("���С����С�ĩ�С�ĩ��Ԫ��֮��=%d\n", sum4);
	system("pause");
}