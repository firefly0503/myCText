#include "stdio.h"
main()
{
	int sum[10][2], i;
	char s[50];
	printf("请输入数字字符串\n");
	gets(s); printf("\n数字字符串：%s\n", s);
	for (i = 0; i<10; i++)
	{
		sum[i][0] = i; sum[i][1] = 0;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] <= '9'&&s[i] >= '0') sum[s[i] - '0'][1]++;
		i++;
	}
	for (i = 0; i<10; i++)
		printf("\n字符串s中字符%c出现次数%d", i + '0', sum[i][1]);
	system("pause");
}
