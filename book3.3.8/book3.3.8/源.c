#include"stdio.h"
#include"math.h"//调用pow(底数,指数)
void main()
{
	int i , m;
	int sum = 0;
	printf("列出所有结果：\n");
	for (i = 1; sum < 10000; i++)
	{
		m = pow(i, i);//m=i^i
		sum = sum + m; 
		printf("项数为：%d, 前%d项和为：%d\n", i , i, sum);

	}
	printf("\n");
	printf("1^1+2^2+3^3+...+n^n>10000的最小项数是n=%d\n", i - 1);//i-1是项数，不是i，因为i初始值为1
	system("pause");
}