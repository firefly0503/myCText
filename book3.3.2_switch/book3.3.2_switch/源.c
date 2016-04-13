#include<stdio.h>
void main()
{
  while (1)//输入字母会导致死循环
  {
	double m, cost;
	int p = 0;
	printf("你的行李质量是多少？\n");
	scanf_s("%lf", &m);
	if (m >= 0)
		if (m <= 50) p = 1;//p=1的意思是行李价格所属第一档 0 < m <= 50
		    else if (m <= 100) p = 2;//p=2的意思是行李价格所属第二档 50< m <= 100
		         else p = 3;//p=3的意思是行李价格所属第三档 m > 100
	else printf("输入错误!\n");
	switch (p)
	{
	case 1://执行第一档的计算公式
	    {
			cost = 0.25*m;
			printf("运费是：%lf 元\n", cost); break;
	    }
	case 2://执行第二档的计算公式
	    {
		    cost = 0.35*(m - 50) + 0.25 * 50;
		    printf("运费是：%lf 元\n", cost); break;
	    }
	case 3://执行第三档的计算公式
	    {
	    	cost = 0.45*(m - 100) + 50 * 0.25 + 50 * 0.35;
	    	printf("运费是：%lf 元\n", cost); break;
	    }
	//default:printf("输入错误!\n"); break;
	}
  }
}
