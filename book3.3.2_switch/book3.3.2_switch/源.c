#include<stdio.h>
void main()
{
  while (1)//������ĸ�ᵼ����ѭ��
  {
	double m, cost;
	int p = 0;
	printf("������������Ƕ��٣�\n");
	scanf_s("%lf", &m);
	if (m >= 0)
		if (m <= 50) p = 1;//p=1����˼������۸�������һ�� 0 < m <= 50
		    else if (m <= 100) p = 2;//p=2����˼������۸������ڶ��� 50< m <= 100
		         else p = 3;//p=3����˼������۸����������� m > 100
	else printf("�������!\n");
	switch (p)
	{
	case 1://ִ�е�һ���ļ��㹫ʽ
	    {
			cost = 0.25*m;
			printf("�˷��ǣ�%lf Ԫ\n", cost); break;
	    }
	case 2://ִ�еڶ����ļ��㹫ʽ
	    {
		    cost = 0.35*(m - 50) + 0.25 * 50;
		    printf("�˷��ǣ�%lf Ԫ\n", cost); break;
	    }
	case 3://ִ�е������ļ��㹫ʽ
	    {
	    	cost = 0.45*(m - 100) + 50 * 0.25 + 50 * 0.35;
	    	printf("�˷��ǣ�%lf Ԫ\n", cost); break;
	    }
	//default:printf("�������!\n"); break;
	}
  }
}
