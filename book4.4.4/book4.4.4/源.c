#include"stdio.h"
main()
{
	int i, j, max, min, flag = 0, col = 0, k;   //flag�ǰ����Ƿ���ڵı�־��0��ʾ������
	int a[5][5] = { {79, 10, 89, 24, 31 }, 
	                { 2,  4, 16,  6,  3}, 
	                {66,  3, 15,  7,  4},
	                { 2,  4, 14, 12,  6},
	                { 2,  5, 78,  3, 21} };//����Ϊ�������Ϊ��С

	for (i = 0; i<5; i++)//��ÿһ��Ѱ�Ұ���
	{
		max = a[i][0];//�ٶ�����Ԫ��Ϊ���ֵ

		for (j = 0; j<5; j++)
			if (max<a[i][j])
			{
				max = a[i][j]; col = j;
			}//��ÿһ�е����ֵmax�����ֵ���ڵ���col

		for (k = 0, min = max; k<5; k++)
			if (a[k][col]<min) min = a[k][col];//��ÿһ�е����ֵmax���ڵ��е���Сֵmin

		if (min == max)//���ÿһ�е����ֵ�ĵ��������е���Сֵ������ڰ��㣬��������Ϣ
		{
			flag = 1;
			printf("������a[%d][%d]=%d\n", i, col, a[i][col]);
		}
	}
	if (flag == 0)
		printf("û�а���\n");
	system("pause");
}
