#include "stdio.h"
#include "string.h" //对字符函数需要的库引入
main()
{
	int i, position;
	char c, s[50];
	printf("请输入字符串: ");
	gets(s);
	printf("请输入要插入的字符: "); 
	fflush(stdin);
	c = getchar();
	printf("请输入要插入字符的位置(0-%d): ", strlen(s));
	scanf_s("%d", &position);
	for (i = strlen(s); i >= position&&i >= 0; i--)
	{
		s[i + 1] = s[i];
	} //s[i+1]复制字符串最后一个字符'\0'
	s[i + 1] = c;
	printf("插入字符后字符串: %s\n", s);
	system("pause");
}
