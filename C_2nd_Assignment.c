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
			
			printf("컴퓨터 : %d       //    ", c);
			for(i = 1; i <= c; i++)
			{
				number++;
				printf("%d ",number);
			}	
			printf("\n");	
			if( number >= 31)
				printf("승리\n");
		}
		
		do
		{
			printf("1부터 3까지의 정수를 입력하세요: ");
			scanf("%d", &n);
			if( n>3 || n<1)
				printf("다시 입력하세요.\n");
		}
		while( n>3 || n<1);
		
		
		printf("사용자 : %d       //    ",n);
		for( i = 1; i<= n; i++)
		{
			number++;
			printf("%d ",number);
		}
		printf("\n");
		if( number >= 31)
			printf("패배\n");
		if( a != 2)
			a += 1;
	}
 
	return 0;
}
char ch()
{
	char ch1;

	printf("g(사용자)와 c(컴퓨터)중 누가 먼저 시작할까요?");
	scanf("%c", &ch1);
	
	if( ch1 == 'g')
		return 1;
	else if( ch1 == 'c')
		return 2;
	else return
		ch();
} 
