#include<stdio.h>
void main()
{
  while (1)
  {	
	double m, cost1, cost2, cost3;
	printf("������������Ƕ���ǧ�ˣ�\n");
	scanf_s("%lf", &m);
	if (m >= 0);
	    if (m <= 50)
	    {
		    cost1 = 0.25 * m;
		    printf("�˷��ǣ�%lf Ԫ\n", cost1);
	    }
	    else if (m <= 100)
	         {
		         cost2 = 0.35*(m - 50) + 0.25 * 50;
		         printf("�˷��ǣ�%lf Ԫ\n", cost2);
	         }
	         else if (m > 100)
	              {
	          	      cost3 = 0.45*(m - 100) + 50 * 0.25 + 50 * 0.35;
		              printf("�˷��ǣ�%lf Ԫ\n", cost3);
	              }
  }
}