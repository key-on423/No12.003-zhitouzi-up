//#include <stdio.h>
//#include <stdlib.h>
//
//
////6.��дһ����������1000��1��10��Χ�ڵ�����������ñ���ʹ�ӡ��Щ���֣�����ӡÿ�����ֳ��ֵĴ�����
////��10����ͬ������ֵ���У����ɵ����ֵĳ��ֵĴ����Ƿ���ͬ������ʹ���Զ���ĺ�����ANSI C��rand��srand����
////���ǵĸ�ʽ��ͬ������һ�������ض����������������Եķ���
//
//
//int num1 = 0; int num3 = 0;
//int num2 = 0; int num4 = 0;
//int num5 = 0; int num6 = 0;
//int num7 = 0; int num8 = 0;
//int num9 = 0; int num10 = 0;
//void shengcheng();
//int main()
//{
//	int x;
//	printf("�ó����������1000��1��10��Χ�ڵ������\n");
//	int i = 0;
//	printf("������1���в�����");
//	while (i<10/*scanf("%d",&x)==1&&x==1*/)
//	{
//		//srand((unsigned int)time(0));//�˿������ض�ʱ��Ψһ����time��0����
//		srand(i);//����1Ϊ����������
//		shengcheng();
//		printf("��%d������\n", i + 1);
//		printf("1������%d�� 2������%d�� 3������%d�� 4������%d�� 5������%d��\n", num1, num2, num3, num4, num5);
//		printf("6������%d�� 7������%d�� 8������%d�� 9������%d�� 10������%d��\n", num6, num7, num8, num9, num10);
//		num1 = num2 = num3 = num4 = num5 = num6 = num7 = num8 = num9 = num10 = 0;//��ʼ��
//		i++;
//		/*if (i >= 10)
//			break;
//		printf("\n��Ҫ������һ����\n");
//		printf("����1�ٴ����ɣ�");*/
//		
//	}
//	printf("Done!\n");
//	return 0;
//}
//void shengcheng()
//{
//	int w = 1;
//	int num = 0;
//	while (w <= 1000)
//	{
//		
//		num = rand() % 11;
//		switch (num)
//		{
//		case 1:
//			num1++;
//			break;
//		case 2:
//			num2++;
//			break;
//		case 3:
//			num3++;
//			break;
//		case 4:
//			num4++;
//			break;
//		case 5:
//			num5++;
//			break;
//		case 6:
//			num6++;
//			break;
//		case 7:
//			num7++;
//			break;
//		case 8:
//			num8++;
//			break;
//		case 9:
//			num9++;
//			break;
//		case 10:
//			num10++;
//			break;
//		}
//		w++;
//	}
//}


#include <stdio.h>
#include <stdlib.h>
//7.��дһ�����������ӽ��װ�

int sides;
int dice;

int main()
{
	//char q='r';
	int x;
	int k;
	int i;
	int w[18];
	int z;
	int sum=0;
	int seed=0;
	printf("Enter the number of elements: ");
	while (scanf("%d", &i) != 1)
	
		{
			printf("����������������룺");
		}
		srand(seed);
		printf("How many sides and how many dice? ");
		while (scanf("%d %d", &sides, &dice) != 2)
		{
			printf("����������������룺");
		}
	
		while (i != 'q')
		{
			for (x = 0;x < i;x++)
			{
				for (k = 0;k < dice;k++)
				{
					sum += rand() % (sides + 1);
				}
				w[x] = sum;
				sum = 0;//��ʼ��
			}
			printf("Here are %d sets of %d %d-sided thorws.\n",i,dice,sides);
			for (z = 0;z < i;z++)
			{
				printf("%d ", w[z]);
				if ((z + 1) % 15 == 0)
					printf("\n");
			}
			printf("\nHow many sets? Enter q to stop\n");
			seed++;
			srand(seed);
			if (scanf("%d", &i) == 1)
			{
				printf("How many sides and how many dice? ");
				while (scanf("%d %d", &sides, &dice) != 2)
				{
					printf("����������������룺");
				}
				while (getchar() != '\n')
					continue;
			}
			else
				break;
		}
		printf("Done!\n");
			return 0;
}