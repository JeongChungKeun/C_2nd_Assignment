#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char ch();

int main()
{
	int a, i, n, c;
	int number = 0;

	srand((unsigned)time(NULL));
 
	a=ch();
 
	while ( number < 30)
	{
		if( a == 2)
		{
			c = rand()%3 + 1;
			
			printf("��ǻ�� : %d       //    ", c);
			for(i = 1; i <= c; i++)
			{
				number++;
				printf("%d ",number);
			}	
			printf("\n");	
			if( number >= 31)
				printf("�¸�\n");
		}
		
		do
		{
			printf("1���� 3������ ������ �Է��ϼ���: ");
			scanf("%d", &n);
			if( n>3 || n<1)
				printf("�ٽ� �Է��ϼ���.\n");
		}
		while( n>3 || n<1);
		
		
		printf("����� : %d       //    ",n);
		for( i = 1; i<= n; i++)
		{
			number++;
			printf("%d ",number);
		}
		printf("\n");
		if( number >= 31)
			printf("�й�\n");
		if( a != 2)
			a += 1;
	}
 
	return 0;
}
char ch()
{
	char ch1;

	printf("g(�����)�� c(��ǻ��)�� ���� ���� �����ұ��?");
	scanf("%c", &ch1);
	
	if( ch1 == 'g')
		return 1;
	else if( ch1 == 'c')
		return 2;
	else return
		ch();
} 
