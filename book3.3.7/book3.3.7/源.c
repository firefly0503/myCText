#include"stdio.h"
void main()
{
	int i, j, k;
	double a[7], b[7], c[7], d[7], e[7];
	double average, score[7];
	for (i = 0, j = 1; i < 7; i++)//开始输入第1位学生
	{
		if (i == 0)
		{
			printf("输入第%d名同学的学号：", j);
			scanf_s("%lf", &a[0]);//[0]储存为学号
			i++;
		}
			printf("输入第%d名同学的第%d门课程成绩：", j, i);
			scanf_s("%lf", &a[i]);
	}
	for (i = 0, j = 2; i < 7; i++)//开始输入第2位学生
	{
		if (i == 0)
		{
			printf("输入第%d名同学的学号：", j);
			scanf_s("%lf", &b[0]);
			i++;
		}
		printf("输入第%d名同学的第%d门课程成绩：", j, i);
		scanf_s("%lf", &b[i]);
	}
	for (i = 0, j = 3; i < 7; i++)//开始输入第3位学生
	{
		if (i == 0)
		{
			printf("输入第%d名同学的学号：", j);
			scanf_s("%lf", &c[0]);
			i++;
		}
		printf("输入第%d名同学的第%d门课程成绩：", j, i);
		scanf_s("%lf", &c[i]);
	}
	for (i = 0, j = 4; i < 7; i++)//开始输入第4位学生
	{
		if (i == 0)
		{
			printf("输入第%d名同学的学号：", j);
			scanf_s("%lf", &d[0]);
			i++;
		}
		printf("输入第%d名同学的第%d门课程成绩：", j, i);
		scanf_s("%lf", &d[i]);
	}
	for (i = 0, j = 25; i < 7; i++)//开始输入第5位学生
	{
		if (i == 0)
		{
			printf("输入第%d名同学的学号：", j);
			scanf_s("%lf", &e[0]);
			i++;
		}
		printf("输入第%d名同学的第%d门课程成绩：", j, i);
		scanf_s("%lf", &e[i]);
	}
	printf("\n");//换行
	//到此为止，输入数据结束；开始进行比较
	score[1] = a[1] + a[2] + a[3] + a[4] + a[5] + a[6];
	score[2] = b[1] + b[2] + b[3] + b[4] + b[5] + b[6];
	score[3] = c[1] + c[2] + c[3] + c[4] + c[5] + c[6];
	score[4] = d[1] + d[2] + d[3] + d[4] + d[5] + d[6];
	score[5] = e[1] + e[2] + e[3] + e[4] + e[5] + e[6];
	printf("第1位同学的总成绩：%lf，  平均成绩：%lf\n", score[1], score[1] / 6);
	printf("第2位同学的总成绩：%lf，  平均成绩：%lf\n", score[2], score[2] / 6);
	printf("第3位同学的总成绩：%lf，  平均成绩：%lf\n", score[3], score[3] / 6);
	printf("第4位同学的总成绩：%lf，  平均成绩：%lf\n", score[4], score[4] / 6);
	printf("第5位同学的总成绩：%lf，  平均成绩：%lf\n", score[5], score[5] / 6);
	//到此为止，计算结束，开始比较

}