#include"stdio.h"
void main()
{
	int year, month, day, date = 0;
	printf("������һ�����ڣ���ʽ yyyy.mm.dd\n");
	scanf_s("%d.%d.%d", &year, &month, &day);
	if (year >= 0 && month >= 1 && month <= 12 && day >= 1 && day <= 31)//�����ж����ںϷ�
	    if (year % 4 == 0 && year % 100 != 0 || year % 100 == 0)//������
	    {
		    printf("����\n");
			if (month == 1 && day <= 31 || month == 2 && day <= 29 || month == 3 && day <= 31 || month == 4 && day <= 30 || month == 5 && day <= 31 || month == 6 && day <= 30 || month == 7 && day <= 31 || month == 8 && day <= 31 || month == 9 && day <= 30 || month == 10 && day <= 31 || month == 11 && day <= 30 || month == 12 && day <= 31)
				switch (month)
				{
				case 1: date = day; break;
				case 2: date = 1 * 31 + day; break;
				case 3: date = 1 * 31 + 1 * 29 + day; break;
				case 4: date = 2 * 31 + 1 * 29 + day; break;
				case 5: date = 2 * 31 + 1 * 30 + 1 * 29 + day; break;
		   	    case 6: date = 3 * 31 + 1 * 30 + 1 * 29 + day; break;
	            case 7: date = 3 * 31 + 2 * 30 + 1 * 29 + day; break;
	            case 8: date = 4 * 31 + 2 * 30 + 1 * 29 + day; break;
			    case 9: date = 4 * 31 + 3 * 30 + 1 * 29 + day; break;
			    case 10: date = 5 * 31 + 3 * 30 + 1 * 29 + day; break;
			    case 11: date = 5 * 31 + 4 * 30 + 1 * 29 + day; break;
			    case 12: date = 6 * 31 + 4 * 30 + 1 * 29 + day; break;
			    }
				printf("��һ����%d��ĵ�%d��\n", year, date);
		}
	    else //��������
	    {
			    printf("��������\n");
				if (month == 1 && day <= 31 || month == 2 && day <= 28 || month == 3 && day <= 31 || month == 4 && day <= 30 || month == 5 && day <= 31 || month == 6 && day <= 30 || month == 7 && day <= 31 || month == 8 && day <= 31 || month == 9 && day <= 30 || month == 10 && day <= 31 || month == 11 && day <= 30 || month == 12 && day <= 31)
				switch (month)
				{
				case 1: date = day; break;
				case 2: date = 1 * 31 + day; break;
				case 3: date = 1 * 31 + 1 * 28 + day; break;
				case 4: date = 2 * 31 + 1 * 28 + day; break;
				case 5: date = 2 * 31 + 1 * 30 + 1 * 28 + day; break;
				case 6: date = 3 * 31 + 1 * 30 + 1 * 28 + day; break;
				case 7: date = 3 * 31 + 2 * 30 + 1 * 28 + day; break;
				case 8: date = 4 * 31 + 2 * 30 + 1 * 28 + day; break;
				case 9: date = 4 * 31 + 3 * 30 + 1 * 28 + day; break;
				case 10: date = 5 * 31 + 3 * 30 + 1 * 28 + day; break;
				case 11: date = 5 * 31 + 4 * 30 + 1 * 28 + day; break;
				case 12: date = 6 * 31 + 4 * 30 + 1 * 28 + day; break;
				}
				printf("��һ����%d��ĵ�%d��\n", year, date);
	    }
	else printf("�������!\n");
	system("pause");
}