#include<stdio.h>
main()
{
	double m, cost1, cost2, cost3;
	printf("������������Ƕ���ǧ�ˣ�\n");
	scanf_s("%lf", &m);
	if (m <= 50)
	{
		cost1 = 0.25 * m;
		printf("�˷��ǣ�%f Ԫ\n", cost1);
	}
	else if (m <= 100)//50 < m <=100
	{
		cost2 = 0.35*(m - 50) + 0.25 * 50;
		printf("�˷��ǣ�%f Ԫ\n", cost2);
	}
	else if (m > 100)//50 < m, 100 < m
	{
		cost3 = 0.45*(m - 100) + 50 * 0.25 + 50 * 0.35;
		printf("�˷��ǣ�%f Ԫ\n", cost3);
	}
	system("pause");
}