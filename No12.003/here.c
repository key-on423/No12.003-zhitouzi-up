//#include <stdio.h>
//#include <stdlib.h>
//
//
////6.编写一个程序，生成1000个1到10范围内的随机数。不用保存和打印这些数字，仅打印每个数字出现的次数。
////用10个不同的种子值运行，生成的数字的出现的次数是否相同？可以使用自定义的函数或ANSI C的rand和srand函数
////他们的格式相同。这是一个测试特定随机数生成器随机性的方法
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
//	printf("该程序随机生成1000个1到10范围内的随机数\n");
//	int i = 0;
//	printf("请输入1进行操作：");
//	while (i<10/*scanf("%d",&x)==1&&x==1*/)
//	{
//		//srand((unsigned int)time(0));//此可生成特定时间唯一种子time（0）；
//		srand(i);//从以1为种子来生成
//		shengcheng();
//		printf("第%d次运行\n", i + 1);
//		printf("1出现了%d次 2出现了%d次 3出现了%d次 4出现了%d次 5出现了%d次\n", num1, num2, num3, num4, num5);
//		printf("6出现了%d次 7出现了%d次 8出现了%d次 9出现了%d次 10出现了%d次\n", num6, num7, num8, num9, num10);
//		num1 = num2 = num3 = num4 = num5 = num6 = num7 = num8 = num9 = num10 = 0;//初始化
//		i++;
//		/*if (i >= 10)
//			break;
//		printf("\n还要再生成一次吗？\n");
//		printf("输入1再次生成：");*/
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
//7.编写一个程序，掷骰子进阶版

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
			printf("输入错误，请重新输入：");
		}
		srand(seed);
		printf("How many sides and how many dice? ");
		while (scanf("%d %d", &sides, &dice) != 2)
		{
			printf("输入错误，请重新输入：");
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
				sum = 0;//初始化
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
					printf("输入错误，请重新输入：");
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